
num [0-9]
char [A-Za-z]
%option yylineno
%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "y.tab.h"
	int yywrap();

	
%}

%%
{num}+:							{;}
"goto"							{yylval.txt = strdup(yytext);return GOTO;}
"if"							{yylval.txt = strdup(yytext);return IF;}
"not"							{yylval.txt = strdup(yytext);return NOT;}
"end"							{yylval.txt = strdup(yytext);return END;}
("$L"{num}+)						{yylval.txt = strdup(yytext);return LABEL;}
("$t"{num}+)						{yylval.txt = strdup(yytext);return TEMP;}
{num}+							{/*ECHO*/;yylval.txt = strdup(yytext);return NUM;}
{char}+							{/*ECHO*/;yylval.txt = strdup(yytext);return ID;}
":"|"\("|"\)"						{/*ECHO;*/yylval.txt = strdup(yytext);return yytext[0];}
"="							{/*ECHO*/;yylval.txt = strdup(yytext);return EQ;}
"!"							{/*ECHO*/;yylval.txt = strdup(yytext);return BOOL;}	
">"|"<"							{/*ECHO*/;yylval.txt = strdup(yytext);return yytext[0];}
"&&"							{/*ECHO*/;yylval.txt = strdup(yytext);return AND;}
"||"							{/*ECHO*/;yylval.txt = strdup(yytext);return OR;}
"!="							{/*ECHO;*/yylval.txt = strdup(yytext);return NEQ;}
"<=" 							{/*ECHO;*/yylval.txt = strdup(yytext);return LE;}
">="							{/*ECHO;*/yylval.txt = strdup(yytext);return GE;}
"*"|"+"|"-"|"/"|"%" 					{/*ECHO*/;yylval.txt = strdup(yytext);return yytext[0];}
\n							{;}					
[\t|' ']						{;}
.												{;}
%%

int yywrap()
{
		return(1);
}


