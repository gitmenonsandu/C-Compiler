%{
	#include <bits/stdc++.h>
	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol.cpp" // Symbol Table
	#include "icg.c" // ICG Phase
	#include "semantic.cpp" // Semantic Phase
	int g_addr = 100;
	stack<float> values;

	extern "C" {
		int yylex();
		void yyerror(char *);
	}

	int scope_val;
	char null[2] = " ";
%}
%token<str> ID NUM REAL
%token SIZEOF
%token PTR DOT
%token TYPEDEF STRUCT
%token<iValue> INT FLOAT VOID
%token IF ELSE WHILE RETURN FOR DO SWITCH CASE BREAK DEFAULT CONTINUE
%token PRINTF SCANF
%token STRING
%token PREPROC
%token<str> MUL_ASSIGN SUB_ASSIGN DIV_ASSIGN ADD_ASSIGN
%token ARRAY FUNCTION
%token MAIN

%token<str> GT LT LE GE NE EQ

%left GT LT LE GE NE EQ
%left AND OR

%left '+' '-'
%left '*' '/'

%type<iValue> Type
%type<str> Assignment ArrayUsage assign_operator Expression Expr RelOP FunctionCall CompoundStmt StmtList Stmt

%union 
	{
 		int iValue; /* integer value */
 		char *str; /* identifier name */
	}


%%
start:	Function start
	| Declaration start
	| PREPROC start
	| 
	;

/* Declaration block */
Declaration: Type Assignment ';'
	{ 
		if( check1($2) )
		{
			insert($2,$1,g_addr,cscope.top(),values.top(),0); 
			g_addr+=4;
			values.pop();
		}
		else
		{
			printf("Redeclaration of variable : %s \n",$2);
		}
	}
	| Assignment ';'
	{
		int scope_check = check2($1);
		if( scope_check == -1)
		{
			printf("Undeclared variable : %s \n",$1);
		}
		else if( scope_check == 0)
		{
			printf("Variable out of scope : %s \n", $1);
		}
		else
		{
			update($1, scope_check, values.top());
			values.pop();
		}
	}
	| FunctionCall ';' 	
	| ArrayUsage ';' 
	| Type ArrayUsage ';' { insert($2,$1,g_addr,scope,0.0,ARRAY); g_addr+=4; } 
	| StructStmt ';'
	| error	
	;

/* Assignment block */
Assignment: ID { pushicg($1);} assign_operator { pushicg($3); } Expression 
	{
		string a($5);
		if(isnum(a)!=2)
		{
			values.push(atof($5));
		}
		else
		{
			values.push(0.0);
		}
		$$ = $1;
		codegen_assign();
	}
	| ArrayUsage assign_operator Expression
	| ID ',' Assignment
	{
		char ass[100];
		strcpy(ass, $3);
		strcat(ass, "&");
		strcat(ass, $1);
		values.push(0.0);
		$$ = ass;
	}
	| ID { $$ = $1; values.push(0.0); }
	| NUM
	| REAL
	;

assign_operator: '=' { char assign[2] = "="; $$ = assign; }
	| MUL_ASSIGN
	| SUB_ASSIGN
	| DIV_ASSIGN
	| ADD_ASSIGN
	;

/*Expression Block*/

Expr: Expression RelOP { { strcpy(tstack[++top], $2); }} Expression 
	{
		if(check($1,$4))
				printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		codegen();
	}
	;

RelOP: LE 
	| GE
	| NE
	| EQ
	| GT
	| LT
	;

Expression: Expression '+' { strcpy(tstack[++top], "+"); } Expression
	{ 
		if(check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		codegen();
	}
	|	Expression '-' { strcpy(tstack[++top], ""); } Expression
	{ 
		if(check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		codegen();
	}
	|	Expression '*' { strcpy(tstack[++top], "*"); } Expression
	{ 
		if(check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		codegen();
	}
	|	Expression '/' { strcpy(tstack[++top], "/"); } Expression
	{ 
		if(check($1,$4))
			printf("Type Mismatch %s %s \n",$1,$4);
		else
			$$ = $1;
		codegen();
	}
	| '(' Expression ')' 
		{ 
			$$ = $2; 
		}
	|   NUM 
		{ 
			$$ = $1;
			pushicg($1); 
		}
	|   REAL 
		{
			$$ = $1; 
			pushicg($1); 
		}
	|   ID 
		{ 
			int scope_check = check2($1);
			if( scope_check == -1)
			{
				printf("Undeclared variable : %s \n",$1);
			}
			else if( scope_check == 0)
			{
				printf("Variable out of scope : %s \n", $1);
			}
			$$ = $1; 
			pushicg($1); 
		}
	| 	ArrayUsage { codegen_array(); } 
	| 	FunctionCall
	;

/* Function Call Block */
FunctionCall : ID'('')'
	| ID'('Assignment')' 
	;

/* Array Usage */
ArrayUsage : ID { pushicg($1); }'[' Expression ']'
	;


/* Function block */
Function: Type ID '(' ArgListOpt ')' CompoundStmt 
	{ 
		if(function_check($2))
		{
			printf("Type Mismatch in function name: %s\n", $2);
		}
		else
		{
			int num_check = isnum($6);
			if(num_check == 0)
			{
				if($1 != INT)
					printf("Return Type Mismatch in function name: %s ( INT required )\n", $2);
				else
					insert($2,$1,g_addr,0,0,FUNCTION);g_addr+=4;
			}
			else if(num_check == 1 && $1 != FLOAT)
			{
				if($1 != FLOAT)
					printf("Return Type Mismatch in function name: %s ( FLOAT required )\n", $2);
				else
					insert($2,$1,g_addr,0,0,FUNCTION);g_addr+=4;			
			}
			else
			{
				string a($6);
				cscope.push(scope_val);
				flag_function = true;
				if(type_of(a) != $1)
				{
					printf("Return Type Mismatch in function name: %s\n", $2);		
				}
				else
				{
					insert($2,$1,g_addr,0,0,FUNCTION);g_addr+=4;
				}
				flag_function = false;
				cscope.pop();
			}
		} 
	}
	;

ArgListOpt: ArgList
	|
	;

ArgList:  ArgList ',' Arg
	| Arg
	;

Arg:	Type ID
	;

/* Statement block */

CompoundStmt:	'{' { scope++; cscope.push(scope); }  
					StmtList 
				'}' { scope_val = cscope.top(); ef[cscope.top()] = 1; cscope.pop(); $$ = $3; } 
	;

StmtList:	StmtList Stmt { $$ = $2; }
	| { $$ = null; }
	;

Stmt:	WhileStmt { $$ = null; }
	| DoWhileStmt { $$ = null; }
	| Declaration { $$ = null; }
	| ForStmt { $$ = null; }
	| IfStmt { $$ = null; }
	| PrintFunc { $$ = null; }
	| ';' { $$ = null; }
	| RETURN ';' { $$ = null; }
	| RETURN Assignment ';' { $$ = $2; }
	| BREAK ';' { $$ = null; }
	| CONTINUE ';' { $$ = null; }
	| CompoundStmt { $$ = $1; }
	;

/* Type Identifier block */
Type:	INT 
	| FLOAT
	| VOID 
	;

/* Loop Blocks */ 
WhileStmt: WHILE { while1(); } '(' Expr ')' {while2();} Stmt {while3();}
	;

DoWhileStmt: DO {dowhile1();} Stmt WHILE '(' Expr ')' ';' {dowhile2();}
	;

/* For Block */
ForStmt: FOR '(' Assignment { for1(); } ';' Expr  { for2(); } ';' Assignment { for3();} ')' Stmt { for4(); }
	;

/* IfStmt Block */
IfStmt : IF '(' Expr ')' { if1(); } CompoundStmt  Else { if3(); }
        
Else : ELSE {if2();} CompoundStmt
	| 
	;

/* Struct Statement */
StructStmt : STRUCT ID '{' Type Assignment ';' '}' { insert($2,STRUCT,g_addr,0,0,$4); g_addr+=4; } 
	;

/* Print Function */
PrintFunc : PRINTF '(' STRING ')' ';'
	;

%%

#include "lex.yy.c"
#include "ctype.h"

int main(int argc,char *argv[])
{
	FILE *file;
		file = fopen(argv[1], "r");
		if (!file)
		{
			fprintf(stderr, "Could not open %s\n", argv[1]);
			exit(1);
		}
		yyin = file;
	cscope.push(0);
	if(!yyparse())
		{
		printf("\nParsing done\n");
		printsym();
		}
	else
		printf("\nParsing failed\n");

	fclose(yyin);
	clearsym();
	return 0;
}

void yyerror(char *s)
{
	printf("%d 	:	%s  %s \n",yylineno,s,yytext);
	return;
}