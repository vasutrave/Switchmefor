%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int yyerror(const char* );
	int yylineno;
	int label_set = 0;
	typedef struct sym
	{
		char id[32];
		char val[32];
		int lineno;
	}symbol;
	symbol sym[150];
	int symsize = -1;
	int isnum = 1 ;
	int result;
	void addsym(char *, char *);
	void printsym();
	int ispresent(char *);
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
	  |	END {printf("end\n");printsym();}
	  ;
label : LABEL ':' {printf("\n%s :\n",$1);label_set = 1;}
	 ;

assign: oper EQ{printf("%s = ",$1);isnum = 1;} exp{printf("\n");if(isnum)addsym($1,$4);} ;

if 	  : IF '(' NOT{printf("%s ( %s ",$1,$3);} exp ')' GOTO LABEL {printf(" ) goto %s\n",$8);}
	  | IF '('{printf("%s ( ",$1);} exp NEQ{printf(" %s ",$5);} exp ')' GOTO LABEL {printf(") goto %s\n",$10);}
	  ;
goto  : GOTO LABEL {printf("goto %s\n",$2);}
	  ;

exp	  :logical 
	  |oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} '+' oper{printf(" + ");if(!ispresent($4)) printf("%s",$4);}
	  |oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} '-' oper{printf(" - ");if(!ispresent($4)) printf("%s",$4);}
	  |oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} '*' oper{printf(" * ");if(!ispresent($4)) printf("%s",$4);}
	  |oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} '/' oper{printf(" / ");if(!ispresent($4)) printf("%s",$4);}
	  |oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} '%' oper{printf(" % ");if(!ispresent($4)) printf("%s",$4);}	  
	  ;
 
logical : unary 
		| oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} LE oper{printf(" %s ",$3);if(!ispresent($4)) printf("%s\n",$4);}
		| oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} GE oper{printf(" %s ",$3);if(!ispresent($4)) printf("%s\n",$4);}
		| oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} OR oper{printf(" %s ",$3);if(!ispresent($4)) printf("%s\n",$4);}
		| oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} AND oper{printf(" %s ",$3);if(!ispresent($4)) printf("%s\n",$4);}
		| oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} '<' oper{printf(" < ");if(!ispresent($4)) printf("%s\n",$4);}
		| oper {if(label_set)printf("%s",$1);else if(label_set==0 && !ispresent($1))printf("%s",$1);} '>' oper{printf(" > ");if(!ispresent($4)) printf("%s\n",$4);}
		;

unary : oper{if(label_set)printf("%s",$1);else if(!ispresent($1))printf("%s",$1);}
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
		printf("\n~SUCCESSFUL~\n");


}

void addsym(char* lhs, char* rhs)
{
	symsize++;
	strcpy(sym[symsize].id,lhs);
	strcpy(sym[symsize].val,rhs);
	sym[symsize].lineno = yylineno;
}

void printsym()
{
	printf("\nSymbol Table\n");
	for(int i = 0; i <= symsize; i++)
	{
		printf("%s\t%s\t%d\n",sym[i].id, sym[i].val,sym[i].lineno);
	}
	printf("\n");
}

int ispresent(char *id)
{
	for(int i = symsize; i >= 0; i--)
	{
		if(strcmp(sym[i].id,id)==0){
			printf("%s",sym[i].val);
			return 1;
		}
	}
	return 0;
}

int yyerror(const char * ermsg)
{
	
	printf("ERROR AT: %d",yylineno);
}
