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
	  |	END 
	  ;
label : LABEL ':' 
	 ;

assign: oper EQ{isnum = 1;} exp
	  ;

if 	  : IF '(' NOT exp ')' GOTO LABEL
	  | IF '(' exp NEQ exp ')' GOTO LABEL
	  ;
goto  : GOTO LABEL
	  ;

exp	  :logical 
	  |oper '+' oper{if(isnum){result = atoi($1) + atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
	  | oper '-' oper{if(isnum){result = atoi($1) - atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
	  | oper '*' oper{if(isnum){result = atoi($1) * atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
	  | oper '/' oper{if(isnum){result = atoi($1) / atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
	  | oper '%' oper{if(isnum){result = atoi($1) % atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
	  
	  ;
logical : unary 
		| oper LE oper{if(isnum){result = atoi($1) <= atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
		| oper GE oper{if(isnum){result = atoi($1) >= atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
		| oper OR oper{if(isnum){result = atoi($1) || atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
		| oper AND oper{if(isnum){result = atoi($1) && atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
		| oper '<' oper{if(isnum){result = atoi($1) < atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
		| oper '>' oper{if(isnum){result = atoi($1) > atoi($3);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
		;

unary : oper
	   | BOOL oper {if(isnum){result = !atoi($2);sprintf($$,"%d",result);printf("$$ : %s",$$);}}
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
