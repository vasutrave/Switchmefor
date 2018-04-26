%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int yyerror(const char* );
	int yylineno;
	typedef struct sym
	{
		char id[32];
		int val;
	}symbol;
	symbol sym[150];
	int isnum = 1 ;
	int result;
%}


%error-verbose
%union {
	char* txt;
}

%token<txt> GOTO IF NOT END LABEL EQ AND OR LE GE BOOL NEQ ID TEMP NUM
%type<txt> goto label types stmt assign if logical exp oper unary
 
%left '+' '-'
%left '*' '/'
%start stmt
%%

stmt  : types
	 ;

types : label types 
	  | assign types 
	  | goto types
	  | if types
	  |	END {printf("end\n");}
	  ;
label : LABEL ':' {printf("\n%s :\n",$1);}
	 ;

assign: oper EQ{printf("%s = ",$1);isnum = 1;} exp{printf("\n");} ;

if 	  : IF '(' NOT{printf("%s ( %s",$1,$3);} exp ')' GOTO LABEL {printf(") goto %s\n",$8);}
	  | IF '('{printf("%s ( ",$1);} exp NEQ{printf(" %s ",$5);} exp ')' GOTO LABEL {printf(") goto %s\n",$10);}
	  ;
goto  : GOTO LABEL {printf("goto %s\n",$2);}
	  ;

exp	  :logical 
	  |oper '+' oper{if(isnum){result = atoi($1) + atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s + %s\n",$1,$3);}
	  | oper '-' oper{if(isnum){result = atoi($1) - atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s - %s\n",$1,$3);}
	  | oper '*' oper{if(isnum){result = atoi($1) * atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s * %s\n",$1,$3);}
	  | oper '/' oper{if(isnum){result = atoi($1) / atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s / %s\n",$1,$3);}
	  | oper '%' oper{if(isnum){result = atoi($1) % atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s % %s\n",$1,$3);}	  
	  ;

logical : unary 
		| oper LE oper{if(isnum){result = atoi($1) <= atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s  %s  %s\n",$1,$2,$3);}
		| oper GE oper{if(isnum){result = atoi($1) >= atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s  %s  %s\n",$1,$2,$3);}
		| oper OR oper{if(isnum){result = atoi($1) || atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s  %s  %s\n",$1,$2,$3);}
		| oper AND oper{if(isnum){result = atoi($1) && atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s  %s  %s\n",$1,$2,$3);}
		| oper '<' oper{if(isnum){result = atoi($1) < atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s  <  %s\n",$1,$3);}
		| oper '>' oper{if(isnum){result = atoi($1) > atoi($3);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s  >  %s\n",$1,$3);}
		;

unary : oper{printf(" %s",$1);}
	   | BOOL oper {if(isnum){result = !atoi($2);sprintf($$,"%d",result);printf("%s",$$);}else printf("%s %s\n",$1,$2);}
	   ;
oper : ID{isnum *= 0;}
	 | NUM{isnum *= 1;}
	 | TEMP{isnum *= 0;}
	 ;

%%
int main()
{

	if(!yyparse())
		printf("~SUCCESSFUL~\n");


}

int yyerror(const char * ermsg)
{
	
	printf("ERROR AT: %d",yylineno);
}
