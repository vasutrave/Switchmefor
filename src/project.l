%option yylineno

%{
	#include<stdio.h>
	#include<string.h>
	#include"y.tab.h"
	#include<math.h>
	#include"symtab.h" 
	extern int tcnt;
	int ifPresent(char* sym){
  		int i;
		//printf("sym = %s\n",sym);
  		for(i = 1; i < tcnt ; i ++)
   		{
      			if(!strcmp(sym,symtab[i].symbol))
        			return 1;
      			//else
        		//	return 0;
    		}
		return 0;
	}
	void initEntry(char* sym)
	{

		if(!ifPresent(sym)){
			symtab[tcnt].tok_num = tcnt;
			strcpy(symtab[tcnt].symbol,sym);
			symtab[tcnt].lineno = yylineno;
			
			
		
		}
	}

%}

%%
"#include"([ ]+)?((<(\\.|[^>])+>)|(\"(\\.|[^"])+\"))					                           {ECHO;return HEADER;}
"#define"[ ]+[a-zA-z_][a-zA-z_0-9]* 										   {ECHO;return DEFINE;}

"void"|"char"|"int"|"long"|"float"|"double"|"signed"|"unsigned"							   {initEntry(yytext);
														    strcpy(symtab[tcnt].type,"Keyword");
														    tcnt++;
														    ECHO;
														    return type_const;}

"case"														   {initEntry(yytext); 
														    strcpy(symtab[tcnt].type,"Keyword");
														    tcnt++;
														    ECHO;return CASE;}
"default"													   {initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														    tcnt++;
														    ECHO;return DEFAULT;}
"switch"													    {initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														    tcnt++;
														    ECHO;return SWITCH;}
"for"														  {initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														    
														    tcnt++;
														    ECHO;return FOR;}
"continue"													{initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														  
														    tcnt++;
														    ECHO;return CONTINUE;}
"break"														{initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														 
														    tcnt++;
														    ECHO;return BREAK;}
"return"													{initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														    
														    tcnt++;
														    ECHO;return RETURN;}
"||" 													      { initEntry(yytext);strcpy(symtab[tcnt].type,"LogicalOp");
														    
														    tcnt++;
														    ECHO;return or_const;}
"&&"														{initEntry(yytext); strcpy(symtab[tcnt].type,"LogicallOp");
														    
														    tcnt++;
														    ECHO;return and_const;}
"=="|"!="													 {initEntry(yytext); strcpy(symtab[tcnt].type,"RelationalOp");
														    
														    tcnt++;
														    ECHO;return eq_const;}
"<="|">="													{initEntry(yytext);strcpy(symtab[tcnt].type,"RelationalOp");
														   
														    tcnt++;
														    ECHO;return rel_const;}
"++"|"--"													{initEntry(yytext);strcpy(symtab[tcnt].type,"IncrementalOp");
														   
														    tcnt++;
														    ECHO;return inc_const;}
";"|"="|","|"{"|"}"|"("|")"|"["|"]"|":"										{initEntry(yytext); strcpy(symtab[tcnt].type,"Punctuation");
														 
														    tcnt++;
														    ECHO;return yytext[0];}
"*"|"+"|"-"|"/"|"%"			   					   		   		  {initEntry(yytext); strcpy(symtab[tcnt].type,"ArithmeticOp");
														    
														    tcnt++;
														    ECHO;return yytext[0];}
"&"|"|"|"!"												         {initEntry(yytext);strcpy(symtab[tcnt].type,"LogicalOp");
														    
														    tcnt++;
														    ECHO;return yytext[0];}
"<"|">"														{initEntry(yytext);strcpy(symtab[tcnt].type,"RelationalOp");
														    
														    tcnt++;
														    ECHO;return yytext[0];}
[0-9]+														{initEntry(yytext);strcpy(symtab[tcnt].type,"Integer");
														    
														    tcnt++;
														    ECHO;return int_const;}
[0-9]+"."[0-9]+													{initEntry(yytext);strcpy(symtab[tcnt].type,"Float");
														    
														    tcnt++;
														    ECHO;return float_const;}
"'"."'"														 {initEntry(yytext);strcpy(symtab[tcnt].type,"Character");
														    
														    tcnt++;
														    ECHO;return char_const;}
[a-zA-z_][a-zA-z_0-9]*			 									{initEntry(yytext);strcpy(symtab[tcnt].type,"Identifier");
														   
														    tcnt++;
														    ECHO;return id;}
\"(\\.|[^\"])*\"												   {ECHO;return string;}
"//"(\\.|[^\n])*[\n]												   ;
[/][*]([^*]|[*]*[^*/])*[*]+[/]                                                                                     ;
[ \t\n]														   {ECHO;}
%%

int yywrap(void)
{
    return 1;
}



