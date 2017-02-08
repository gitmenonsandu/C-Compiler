%{
	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>

%}
%token ID NUM SIZEOF REAL
%token PTR DOT
%token TYPEDEF INT FLOAT VOID STRUCT
%token IF ELSE WHILE RETURN FOR DO SWITCH CASE BREAK DEFAULT CONTINUE
%token PRINTF SCANF
%token STRING
%token PREPROC
%token MUL_ASSIGN SUB_ASSIGN DIV_ASSIGN ADD_ASSIGN

%left GT LT LE GE NE EQ
%left AND OR

%right '='
%left '+' '-'
%left '*' '/'

%%
start:	Function 
	| Declaration
	| PREPROC start
	;

/* Declaration block */
Declaration: Type Assignment ';' 
	| Assignment ';'  	
	| FunctionCall ';' 	
	| ArrayUsage ';'	
	| Type ArrayUsage ';'   
	| StructStmt ';'	
	| error	
	;

/* Assignment block */
Assignment: ID assign_operator Assignment
	| ID assign_operator FunctionCall
	| ID assign_operator ArrayUsage
	| ArrayUsage assign_operator Assignment
	| ID ',' Assignment
	| NUM ',' Assignment
	| ID '+' Assignment
	| ID '-' Assignment
	| ID '*' Assignment
	| ID '/' Assignment	
	| NUM '+' Assignment
	| NUM '-' Assignment
	| NUM '*' Assignment
	| NUM '/' Assignment
	| REAL '+' Assignment
	| REAL '-' Assignment
	| REAL '*' Assignment
	| REAL '/' Assignment
	| '\'' Assignment '\''	
	| '(' Assignment ')'
	| '-' '(' Assignment ')'
	| '-' NUM
	| '-' REAL
	| '-' ID
	|   NUM
	|   REAL
	|   ID
	;

assign_operator: '='
	| MUL_ASSIGN
	| SUB_ASSIGN
	| DIV_ASSIGN
	| ADD_ASSIGN
	;

/* Function Call Block */
FunctionCall : ID'('')'
	| ID'('Assignment')'
	;

/* Array Usage */
ArrayUsage : ID'['Assignment']'
	;

/* Function block */
Function: Type ID '(' ArgListOpt ')' CompoundStmt 
	;
ArgListOpt: ArgList
	|
	;
ArgList:  ArgList ',' Arg
	| Arg
	;
Arg:	Type ID
	;
CompoundStmt:	'{' StmtList '}'
	;
StmtList:	StmtList Stmt
	|
	;
Stmt:	WhileStmt
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
WhileStmt: WHILE '(' Expr ')' Stmt  
	| WHILE '(' Expr ')' CompoundStmt 
	;

/* For Block */
ForStmt: FOR '(' Expr ';' Expr ';' Expr ')' Stmt 
       | FOR '(' Expr ';' Expr ';' Expr ')' CompoundStmt 
       | FOR '(' Expr ')' Stmt 
       | FOR '(' Expr ')' CompoundStmt 
	;

/* IfStmt Block */
IfStmt : IF '(' Expr ')' Stmt
		| IF '(' Expr ')' CompoundStmt
        | IF '(' Expr ')' CompoundStmt ELSE CompoundStmt
	;

/* Struct Statement */
StructStmt : STRUCT ID '{' Type Assignment '}'  
	;

/* Print Function */
PrintFunc : PRINTF '(' Expr ')' ';'
	;

/*Expression Block*/
Expr:	
	| Expr LE Expr 
	| Expr GE Expr
	| Expr NE Expr
	| Expr EQ Expr
	| Expr GT Expr
	| Expr LT Expr
	| Assignment
	| ArrayUsage
	;


%%

#include "lex.yy.c"
#include "ctype.h"
int count=0;

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
		printf("\nParsing done\n");
	else
		printf("\nParsing failed\n");

	fclose(yyin);

	return 0;
}

void yyerror(char *s)
{
	printf("%d 	:	%s  %s \n",yylineno,s,yytext);
}
