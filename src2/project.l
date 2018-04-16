%option yylineno
%{
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
	#include<math.h>
	#include"symtab.h"


%}

%%

"#include"([ ]+)?((<(\\.|[^>])+>)|(\"(\\.|[^"])+\"))					       {yylval.txt = strdup(yytext);return HEADER;}
"#define"[ ]+[a-zA-z_][a-zA-z_0-9]* 										   {yylval.txt = strdup(yytext);return DEFINE;}

"void"|"char"|"int"|"long"|"float"|"double"|"signed"|"unsigned"			{yylval.txt = strdup(yytext);
																		ECHO;
														    			return type_const;}

"case"														   {yylval.txt = strdup(yytext);
														   		 ECHO;return CASE;}
"default"													   {yylval.txt = strdup(yytext);
														    ECHO;return DEFAULT;}
"switch"													    {yylval.txt = strdup(yytext);
														    ECHO;return SWITCH;}
"for"														  {yylval.txt = strdup(yytext);
														    ECHO;return FOR;}
"continue"													{yylval.txt = strdup(yytext);
														    ECHO;return CONTINUE;}
"break"														{yylval.txt = strdup(yytext);
														    ECHO;return BREAK;}
"return"													{yylval.txt = strdup(yytext);
														    ECHO;return RETURN;}
"||" 													      { yylval.txt = strdup(yytext);
														    ECHO;return or_const;}
"&&"														{yylval.txt = strdup(yytext);
														    ECHO;return and_const;}
"=="|"!="													 {yylval.txt = strdup(yytext);
														    ECHO;return eq_const;}
"<="|">="													{yylval.txt = strdup(yytext);
														    ECHO;return rel_const;}
"++"|"--"													{yylval.txt = strdup(yytext);
														    ECHO;return inc_const;}

"="														{yylval.txt = strdup(yytext);
														    ECHO;return yytext[0];}
";"|","|"{"|"}"|"("|")"|"["|"]"|":"						{yylval.txt = strdup(yytext);
														    /*printf("\nyytext = %s/-",yytext);
														    if(strcmp(yytext,"{")==0){
															//open_brack++;
															bal_brack++;
															if(strcmp(prev,"}")==0)
																bal_brack = temp;
															strcpy(prev,yytext);
														    }
														    else if(strcmp(yytext,"}")==0){
														        //close_brack++;
															bal_brack--;
															if(strcmp(prev,"{")==0)
																temp = bal_brack+1;

															strcpy(prev,yytext);
														    }*/

														    ECHO;return yytext[0];}

"*"|"+"|"-"|"/"|"%"			   					   		   		  {yylval.txt = strdup(yytext);
														    ECHO;return yytext[0];}
"&"|"|"|"!"												         {yylval.txt = strdup(yytext);
														    ECHO;return yytext[0];}
"<"|">"														{yylval.txt = strdup(yytext);
														    ECHO;return yytext[0];}
[0-9]+														{yylval.txt = strdup(yytext);
														    ECHO;return int_const;}
[0-9]+"."[0-9]+													{yylval.txt= strdup(yytext);
														    ECHO;return float_const;}
"'"."'"														 {yylval.txt = strdup(yytext);
														    ECHO;return char_const;}
[a-zA-Z_][a-zA-Z_0-9]*			 									{yylval.txt = strdup(yytext);
														    ECHO;return id;}
\"(\\.|[^\"])*\"												   {yylval.txt = strdup(yytext);
																			ECHO;return string;}
"//"(\\.|[^\n])*[\n]												   ;
[/][*]([^*]|[*]*[^*/])*[*]+[/]                                         ;
[ \t\n]														   {ECHO;}
%%

int yywrap(void)
{
    return 1;
}
