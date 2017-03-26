alpha [a-zA-Z]
digit [0-9]

%%
[ \t]		;
[ \n]   { yylineno = yylineno + 1;}

int	{ yylval.iValue = INT; return INT; }
float { yylval.iValue = FLOAT; return FLOAT;}
void {yylval.iValue=VOID; return VOID;}
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
{digit}+       { yylval.str = strdup(yytext); return NUM;}
({digit}*\.{digit}+)|({digit}+\.{digit}*) {yylval.str = strdup(yytext); return REAL;}
{alpha}({alpha}|{digit})* { yylval.str = strdup(yytext); return ID ;}
"<="    {yylval.str=strdup(yytext); return LE; }
">="    {yylval.str=strdup(yytext); return GE; }
"=="    {yylval.str=strdup(yytext); return EQ; }
"!="    {yylval.str=strdup(yytext); return NE; }
">"		{yylval.str=strdup(yytext); return GT; }
"<"		{yylval.str=strdup(yytext); return LT; }
"."     return DOT;
"*=" {yylval.str=strdup(yytext); return MUL_ASSIGN;}
"+=" {yylval.str=strdup(yytext); return ADD_ASSIGN;}
"-=" {yylval.str=strdup(yytext); return SUB_ASSIGN;}
"/=" {yylval.str=strdup(yytext); return DIV_ASSIGN;}
"&&" return AND;
"||" return OR;
\/\/.* ;
\/\*(.*\n)*.*\*\/ ;
\"(\\.|[^"])*\" {yylval.str=strdup(yytext); return STRING;}
. return yytext[0];

%%