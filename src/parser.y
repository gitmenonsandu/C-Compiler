%{
	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "symbol.cpp"
	#include "icg.c"
	#include "semantic.cpp"
	int g_addr = 100;

	extern "C" {
		int yylex();
		void yyerror(char *);
	}
	
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
%token<str> ASSIGN MUL_ASSIGN SUB_ASSIGN DIV_ASSIGN ADD_ASSIGN
%token ARRAY FUNCTION
%token MAIN

%token<str> GT LT LE GE NE EQ

%left GT LT LE GE NE EQ
%left AND OR

//%right '='
%left '+' '-'
%left '*' '/'

%type<iValue> Type
%type<str> Assignment ArrayUsage assign_operator Expression Expr RelOP FunctionCall

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
		insert($2,$1,g_addr); g_addr+=4;
	}  	
	| Assignment ';'
	| FunctionCall ';' 	
	| ArrayUsage ';' 
	| Type ArrayUsage ';' { insert($2,ARRAY,g_addr);
							insert($2,$1,g_addr); g_addr+=4; } 
	| StructStmt ';'
	| error	
	;

/* Assignment block */
Assignment: ID { pushicg($1);} assign_operator { pushicg($3); } Expression {codegen_assign();}
	| ArrayUsage assign_operator Expression
	| ID ',' Assignment
	| NUM ',' Assignment { $$ = $3; }
	| ID
	| NUM
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
		insert($2,FUNCTION,g_addr); insert($2,$1,g_addr);g_addr+=4; 
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

CompoundStmt:	'{'  StmtList '}'
	;

StmtList:	StmtList Stmt
	|
	;
Stmt:	WhileStmt
	| DoWhileStmt
	| Declaration
	| ForStmt
	| IfStmt
	| PrintFunc
	| ';'
	| RETURN ';'
	| RETURN Assignment ';'
	| BREAK ';'
	| CONTINUE ';'
	;

/* Type Identifier block */
Type:	INT 
	| FLOAT
	| VOID 
	;

/* Loop Blocks */ 
WhileStmt: WHILE { while1(); } '(' Expr ')' {while2();} WhileCon
	;

WhileCon: Stmt {while3();}
	| CompoundStmt {while3();}
	; 

DoWhileStmt: DO {dowhile1();} Stmt WHILE '(' Expr ')' ';' {dowhile2();}
	| DO {dowhile1();} CompoundStmt WHILE '(' Expr ')' ';' {dowhile2();}
	;

/* For Block */
ForStmt: FOR '(' Assignment { for1(); } ';' Expr  { for2(); } ';' Assignment { for3();} ')' ForCon
	;

ForCon: Stmt { for4(); }
	| CompoundStmt { for4(); }
	;

/* IfStmt Block */
IfStmt : IF '(' Expr ')' { if1(); } Stmt { if3(); }
		| IF '(' Expr ')' { if1(); } Else
        
Else: CompoundStmt {if2();} ELSE  CompoundStmt {if3();}
	| CompoundStmt {if3();}
	;

/* Struct Statement */
StructStmt : STRUCT ID '{' Type Assignment ';' '}' { insert($2,STRUCT,g_addr); g_addr+=4; } 
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