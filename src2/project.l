%option yylineno

%{
	#include<stdio.h>
	#include<string.h>
	#include"y.tab.h"
	#include<math.h>
	#include"symtab.h" 
	extern int tcnt;
	extern int bal_brack;
	//extern int open_brack;
	extern int temp;
	char prev[2]={'{','\0'};
	int ifPresent(char* sym){
  		int i;
		//printf("sym = %s\n",sym);
  		for(i = 1; i < tcnt ; i ++)
   		{
			if(!strcmp(symtab[i].type,"Identifier"))
      				{
					if(!strcmp(sym,symtab[i].symbol) && symtab[i].scope_num == bal_brack)
        				return 1;
				}
			else{
				      				
					if(!strcmp(sym,symtab[i].symbol))
        				return 1;
				}
				
    		}
		return 0;
	}
	
	void initEntry(char* sym)
	{

		if(!ifPresent(sym)){
			symtab[tcnt].tok_num = tcnt;
			symtab[tcnt].scope_num = bal_brack;
			strcpy(symtab[tcnt].symbol,sym);
			symtab[tcnt].lineno = yylineno;
			symtab[tcnt].size = 0;
			
			
			
		
		}
	}
	int size(char* text)
	{
		if(!strcmp(text,"int"))
			return(sizeof(int));
	        if(!strcmp(text,"double"))
			return(sizeof(double));
		if(!strcmp(text,"float"))
			return(sizeof(float));
		if(!strcmp(text,"char"))
			return(sizeof(char));
		if(!strcmp(text,"long"))
			return(sizeof(long));
		else 
			return 0;

	}

%}

%%
"#include"([ ]+)?((<(\\.|[^>])+>)|(\"(\\.|[^"])+\"))					                           {return HEADER;}
"#define"[ ]+[a-zA-z_][a-zA-z_0-9]* 										   {return DEFINE;}

"void"|"char"|"int"|"long"|"float"|"double"|"signed"|"unsigned"							   {initEntry(yytext);
														    strcpy(symtab[tcnt].type,"Keyword");
															symtab[tcnt].size = size(yytext);
															printf("%d",symtab[tcnt].size);	
														    tcnt++;
														    ECHO;
															yylval.text = strdup(yytext);
														    return type_const;}

"case"														   {initEntry(yytext); 
														    strcpy(symtab[tcnt].type,"Keyword");
														    tcnt++;
															yylval.text = strdup(yytext);
														    ECHO;return CASE;}
"default"													   {initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														    tcnt++;
														    ECHO;yylval.text = strdup(yytext);return DEFAULT;}
"switch"													    {initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														    tcnt++;
														    ECHO;yylval.text = strdup(yytext);return SWITCH;}
"for"														  {initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return FOR;}
"continue"													{initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														  
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return CONTINUE;}
"break"														{initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														 
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return BREAK;}
"return"													{initEntry(yytext);strcpy(symtab[tcnt].type,"Keyword");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return RETURN;}
"||" 													      { initEntry(yytext);strcpy(symtab[tcnt].type,"LogicalOp");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return or_const;}
"&&"														{initEntry(yytext); strcpy(symtab[tcnt].type,"LogicallOp");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return and_const;}
"=="|"!="													 {initEntry(yytext); strcpy(symtab[tcnt].type,"RelationalOp");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return eq_const;}
"<="|">="													{initEntry(yytext);strcpy(symtab[tcnt].type,"RelationalOp");
														   
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return rel_const;}
"++"|"--"													{initEntry(yytext);strcpy(symtab[tcnt].type,"IncrementalOp");
														   
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return inc_const;}
"="														{initEntry(yytext);strcpy(symtab[tcnt].type,"AssignmentOp");
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return yytext[0];}

";"|","|"{"|"}"|"("|")"|"["|"]"|":"										{   initEntry(yytext); strcpy(symtab[tcnt].type,"Punctuation");
														    tcnt++;yylval.text = strdup(yytext);
														    /*printf("\nyytext = %s/-",yytext);*/
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
														    }
														   		
														    ECHO;return yytext[0];}

"*"|"+"|"-"|"/"|"%"			   					   		   		  {initEntry(yytext); strcpy(symtab[tcnt].type,"ArithmeticOp");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return yytext[0];}
"&"|"|"|"!"												         {initEntry(yytext);strcpy(symtab[tcnt].type,"LogicalOp");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return yytext[0];}
"<"|">"														{initEntry(yytext);strcpy(symtab[tcnt].type,"RelationalOp");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return yytext[0];}
[0-9]+														{initEntry(yytext);strcpy(symtab[tcnt].type,"Integer");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return int_const;}
[0-9]+"."[0-9]+													{initEntry(yytext);strcpy(symtab[tcnt].type,"Float");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return float_const;}
"'"."'"														 {initEntry(yytext);strcpy(symtab[tcnt].type,"Character");
														    
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return char_const;}
[a-zA-Z_][a-zA-Z_0-9]*			 									{initEntry(yytext);strcpy(symtab[tcnt].type,"Identifier");
														  /* printf("ID = %s\n",yytext);*/
														    tcnt++;yylval.text = strdup(yytext);
														    ECHO;return id;}
\"(\\.|[^\"])*\"												   {ECHO;yylval.text = strdup(yytext);return string;}
"//"(\\.|[^\n])*[\n]												   ;
[/][*]([^*]|[*]*[^*/])*[*]+[/]                                                                                     ;
[ \t\n]														   {ECHO;}
%%

int yywrap(void)
{
    return 1;
}



