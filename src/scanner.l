alpha [a-zA-Z]
digit [0-9]

%%
[ \t]		;
[ \n]   { yylineno = yylineno + 1;}

int	return INT;
float return FLOAT;
void return VOID;
sizeof return SIZEOF;
typedef return TYPEDEF;
for 	return FOR;
while	return WHILE;
if	return IF;
else	return ELSE;
return return RETURN;
do return DO;
switch return SWITCH;
case return CASE;
break return BREAK;
default return DEFAULT;
continue return CONTINUE;
printf  return PRINTF;
scanf return SCANF;
struct 	return STRUCT;
^"#include ".+ return PREPROC;
{digit}+       return NUM;
({digit}*\.{digit}+)|({digit}+\.{digit}*) return REAL;
{alpha}({alpha}|{digit})* return ID;
"<="    return LE;
">="    return GE;
"=="    return EQ;
"!="    return NE;
">"	return GT;
"<"	return LT;
"."     return DOT;
"*=" return MUL_ASSIGN;
"+=" return ADD_ASSIGN;
"-=" return SUB_ASSIGN;
"/=" return DIV_ASSIGN;
"&&" return AND;
"||" return OR;
\/\/.* ;
\/\*(.*\n)*.*\*\/ ;
\"(\\.|[^"])*\" return STRING;
.*   printf("Lexical Error\n");

%%