D			[0-9]
L			[a-zA-Z_]

%{

#include "y.tab.h"
#include "definition.h"
extern YYSTYPE yylval;
void comment();
void comment2();
int yywrap();
int LINE=1;
%}

%%
"//"		{ comment2();}
"/*"		{ comment(); }
"break"		{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=BREAK;return(BREAK); }
"char"		{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=CHAR;return(CHAR); }
"continue"	{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=CONTINUE;return(CONTINUE);}
"float"		{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=FLOAT;return(FLOAT); }
"for"		{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=FOR;return(FOR); }
"int"		{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=INT;return(INT); }
"return"	{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=RETURN;return(RETURN); }
"void"		{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=VOID;return(VOID); }
"printf"		{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=PRINT;return(PRINT);}

{L}({L}|{D})*	{ yylval.Sval.text=strdup(yytext); yylval.Sval.type=IDENTIFIER;return(IDENTIFIER); }

{D}+		{ yylval.Sval.text=strdup(yytext); yylval.Sval.type=INT;return(CONSTANT); }
'(\\[t0n'"\\]|[^\\'])'	{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=CHAR;return(CONSTANT); }

{D}*"."{D}+	{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=FLOAT;return(CONSTANT); }

\"(\\.|[^\\"])*\"	{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=STRING_LITERAL;return(STRING_LITERAL); }



"++"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=INC_OP;return(INC_OP); }
"--"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=DEC_OP;return(DEC_OP); }
"&&"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=AND_OP;return(AND_OP); }
"||"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=OR_OP;return(OR_OP); }
"<="			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=LE_OP;return(LE_OP); }
">="			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=GE_OP;return(GE_OP); }
"=="			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=EQ_OP;return(EQ_OP); }
"!="			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=NE_OP;return(NE_OP); }
";"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return(';'); }
("{")			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1; return('{'); }
("}")			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('}'); }
","			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return(','); }
"="			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('='); }
"("			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('('); }
")"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return(')'); }
("[")			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('['); }
("]")			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return(']'); }
"."			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('.'); }
"&"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('&'); }
"!"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('!'); }
"~"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('~'); }
"-"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('-'); }
"+"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('+'); }
"*"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('*'); }
"/"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('/'); }
"%"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('%'); }
"<"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('<'); }
">"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('>'); }
"|"			{  yylval.Sval.text=strdup(yytext); yylval.Sval.type=-1;return('|'); }

[ \t\v\n\f]		{  }
.			{ /* ignore bad characters */ }

%%

int yywrap()
{
	return(1);
}


void comment()
{
	char c, c1;

	c=input();
	while(1){
		c1=input();
		if(c=='*' && c1=='/')	break;
		c=c1;
	}
}

void comment2(){
	char c;
	while ((c = input()) != '\n');
}

