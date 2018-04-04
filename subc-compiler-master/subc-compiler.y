%{
#include <stdio.h>
#include <stdlib.h>

extern FILE *fp;
FILE * f1;
void if_label1();
void if_label2();
void if_label3();
void yyerror(char *s);
void push();
void codegen_logical();
void codegen_algebric();
void while_start();
void switch_case();
void codegen_assign();
void while_rep();
void while_end();
void for_start();
void for_rep();
void for_end();
void for_init();
void for_inc();
void switch_start();

int count=0;

char st[1000][10];
int top=0;
int i=0;
char temp[2]="t";

int label[200];
int lnum=0;
int ltop=0;
int switch_stack[1000];
int stop=0;
char type[10];
struct Table
{
	char id[20];
	char type[10];
}table[10000];
int tableCount=0;

%}

%token INT VOID UINT
%token WHILE FOR
%token IF ELSE SWITCH CASE BREAK DEFAULT
%token NUM ID
%token INCLUDE
%right ASGN 
%left LOR
%left LAND
%left BOR
%left BXOR
%left BAND
%left EQ NE 
%left LE GE LT GT
%left '+' '-' 
%left '*' '/' '@'
%left '~'

%nonassoc IFX IFX1
%nonassoc ELSE
  
%%

pgmstart 			: TYPE ID '(' ')' STMTS
				;

STMTS 	: '{'{fprintf(f1,"Gotcha\n");} STMT1 '}'|
				;
STMT1			: STMT  STMT1
				|
				;

STMT 			: STMT_DECLARE    //all types of ements
				| STMT_ASSGN ';'
				| STMT_IF
				| STMT_WHILE
				| STMT_SWITCH
				| {fprintf(f1,"Here");}STMT_FOR
				| ';'
				;

				

EXP 			: EXP LT{push();} EXP {codegen_logical();}
				| EXP LE{push();} EXP {codegen_logical();}
				| EXP GT{push();} EXP {codegen_logical();}
				| EXP GE{push();} EXP {codegen_logical();}
				| EXP NE{push();} EXP {codegen_logical();}
				| EXP EQ{push();} EXP {codegen_logical();}
				| EXP '+'{push();} EXP {codegen_algebric();}
				| EXP '-'{push();} EXP {codegen_algebric();}
				| EXP '*'{push();} EXP {codegen_algebric();}
				| EXP '/'{push();} EXP {codegen_algebric();}
                                | EXP {push();} LOR EXP {codegen_logical();}
				| EXP {push();} LAND EXP {codegen_logical();}
				| EXP {push();} BOR EXP {codegen_logical();}
				| EXP {push();} BXOR EXP {codegen_logical();}
				| EXP {push();} BAND EXP {codegen_logical();}
				| '(' EXP ')'
				| ID {check();push();}
				| NUM {push();}
				;


STMT_IF 			: IF '(' EXP ')'  {if_label1();} STMTS ELSESTMT 
				;
ELSESTMT		: ELSE {if_label2();} STMTS {if_label3();}
				| {if_label3();}
				;

STMT_SWITCH		: SWITCH '(' EXP ')' {switch_start();} '{' SWITCHBODY '}'
				;
SWITCHBODY		: CASES {switch_end();}    
				| CASES DEFAULTSTMT {switch_end();}
				;

CASES 			: CASE NUM {switch_case();} ':' SWITCHEXP BREAKSTMT
				| 
				;
BREAKSTMT		: BREAK {switch_break();} ';' CASES
				|{switch_nobreak();} CASES 
				;

DEFAULTSTMT 	: DEFAULT {switch_default();} ':' SWITCHEXP DE  
				;

DE 				: BREAK {switch_break();}';'
				|
				;


SWITCHEXP 		: STMTS
				| STMT
				;


STMT_WHILE		:{while_start();} WHILE '(' EXP ')' {while_rep();} WHILEBODY  
				;

WHILEBODY		: STMTS {while_end();}
				| STMT {while_end();}
				;

STMT_FOR		: {fprintf(f1,"0")}FOR {fprintf(f1,"1")}'('{printf("2")} STMT_ASSGN {printf("3")}';' EXP{printf("4")} ';' STMT_ASGN ')'FORBODY
				;

FORBODY			:STMTS {for_end();}
				| STMT {for_end();}
				;
STMT_DECLARE 	: TYPE {setType();}  ID {STMT_DECLARE();} IDS   //setting type for that line
				;


IDS 			: ';'
				| ','  ID {STMT_DECLARE();} IDS 
				;


STMT_ASSGN		: ID {push();} ASGN {push();} EXP {codegen_assign();} 
				;


TYPE			: INT
				| VOID
				| UINT
				;

%%

#include <ctype.h>
#include"lex.yy.c"


int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	f1=fopen("output","w");
	
   if(!yyparse())
		printf("\nParsing complete\n");
	else
	{
		printf("\nParsing failed\n");
		exit(0);
	}
	
	fclose(yyin);
	fclose(f1);
	intermediateCode();
    return 0;
}
         
void yyerror(char *s) {
	printf("Syntex Error in line number : %d : %s %s\n", yylineno, s, yytext );
}
    
void push()
{
  	strcpy(st[++top],yytext);
}

void codegen_logical()
{
 	sprintf(temp,"$t%d",i);
  	fprintf(f1,"%s\t=\t%s\t%s\t%s\n",temp,st[top-2],st[top-1],st[top]);
  	top-=2;
 	strcpy(st[top],temp);
 	i++;
}

void codegen_algebric()
{
 	sprintf(temp,"$t%d",i); // converts temp to reqd format
  	fprintf(f1,"%s\t=\t%s\t%s\t%s\n",temp,st[top-2],st[top-1],st[top]);
  	top-=2;
 	strcpy(st[top],temp);
 	i++;
}
void codegen_assign()
{
 	fprintf(f1,"%s\t=\t%s\n",st[top-2],st[top]);
 	top-=3;
}
 
void if_label1()
{
 	lnum++;
 	fprintf(f1,"\tif( not %s)",st[top]);
 	fprintf(f1,"\tgoto $L%d\n",lnum);
 	label[++ltop]=lnum;
}

void if_label2()
{
	int x;
	lnum++;
	x=label[ltop--]; 
	fprintf(f1,"\t\tgoto $L%d\n",lnum);
	fprintf(f1,"$L%d: \n",x); 
	label[++ltop]=lnum;
}

void if_label3()
{
	int y;
	y=label[ltop--];
	fprintf(f1,"$L%d: \n",y);
	top--;
}
void while_start()
{
	lnum++;
	label[++ltop]=lnum;
	fprintf(f1,"$L%d:\n",lnum);
}
void while_rep()
{
	lnum++;
 	fprintf(f1,"if( not %s)",st[top]);
 	fprintf(f1,"\tgoto $L%d\n",lnum);
 	label[++ltop]=lnum;
}
void while_end()
{
	int x,y;
	y=label[ltop--];
	x=label[ltop--];
	fprintf(f1,"\t\tgoto $L%d\n",x);
	fprintf(f1,"$L%d: \n",y);
	top--;
}
void for_start()
{
	lnum++;
	label[++ltop]=lnum;
	fprintf(f1,"$L%d:\n",lnum);

}

void for_init()
{
	lnum++;
	fprintf(f1,"%s \n",st[top]);

}

void for_rep()
{
	lnum++;
 	fprintf(f1,"if( not %s)",st[top]);
 	fprintf(f1,"\tgoto $L%d\n",lnum);
 	label[++ltop]=lnum;
}
void for_inc()
{
	lnum++;
	fprintf(f1,"%s \n",st[top]);
}

void for_end()
{
	int x,y;
	y=label[ltop--];
	x=label[ltop--];
	fprintf(f1,"\t\tgoto $L%d\n",x);
	fprintf(f1,"$L%d: \n",y);
	top--;

}
void switch_start()
{
	lnum++;
	label[++ltop]=lnum;
	lnum++;
	label[++ltop]=lnum;
	switch_stack[++stop]=1;
}
void switch_case()
{
	int x,y,z;
	z=switch_stack[stop--];
	if(z==1)
	{
		x=label[ltop--];
	}
	else if(z==2)
	{
		y=label[ltop--];
		x=label[ltop--];
	}
	fprintf(f1,"$L%d:\n",x);
	lnum++;
	label[++ltop]=lnum;
 	fprintf(f1,"if(%s != %s)",st[top],yytext);
 	fprintf(f1,"\tgoto $L%d\n",label[ltop]);
 	if(z==2)
 	{
 		fprintf(f1,"$L%d:\n",y);
 	}
}
void switch_default()
{
	int x=label[ltop--];
	fprintf(f1,"$L%d:\n",x);
	lnum++;
	label[++ltop]=lnum;
}
void switch_break()
{
	switch_stack[++stop]=1;
	fprintf(f1,"\t\tgoto $L%d\n",label[ltop-1]);
}
void switch_nobreak()
{
	switch_stack[++stop]=2;
	lnum++;
	label[++ltop]=lnum;
	fprintf(f1,"\t\tgoto $L%d\n",label[ltop]);
}
void switch_end()
{
	int x=label[ltop--];
	fprintf(f1,"$L%d:\n",x);
	x=label[ltop--];
	fprintf(f1,"$L%d:\n",x);
	top--;
	stop--;
}


/* for symbol table*/

void check()
{
	char temp[20];
	strcpy(temp,yytext);
	int flag=0;
	for(i=0;i<tableCount;i++)
	{
		if(!strcmp(table[i].id,temp))
		{
			flag=1;
			break;
		}
	}
	if(!flag)
	{
		yyerror("Variable not declard");
		exit(0);
	}
}

void setType()
{
	strcpy(type,yytext);
}


void STMT_DECLARE()
{
	char temp[20];
	int i,flag;
	flag=0;
	strcpy(temp,yytext);
	for(i=0;i<tableCount;i++)
	{
		if(!strcmp(table[i].id,temp))
			{
			flag=1;
			break;
				}
	}
	if(flag)
	{
		yyerror("reSTMT_DECLARE of ");
		exit(0);
	}
	else
	{
		strcpy(table[tableCount].id,temp);
		strcpy(table[tableCount].type,type);
		tableCount++;
	}
}

void intermediateCode()
{
	int Labels[100000];
	char buf[100];
	f1=fopen("output","r");
	int flag=0,lineno=1;
	memset(Labels,0,sizeof(Labels));
	while(fgets(buf,sizeof(buf),f1)!=NULL)
	{
		//printf("%s",buf);
		if(buf[0]=='$'&&buf[1]=='$'&&buf[2]=='L')
		{
			int k=atoi(&buf[3]);
			//printf("hi %d\n",k);
			Labels[k]=lineno;
		}
		else
		{
			lineno++;
		}
	}
	fclose(f1);
	f1=fopen("output","r");
	lineno=0;

	printf("\n\n\n*********************InterMediate Code***************************\n\n");
	while(fgets(buf,sizeof(buf),f1)!=NULL)
	{
		//printf("%s",buf);
		if(buf[0]=='$'&&buf[1]=='$'&&buf[2]=='L')
		{
			;
		}
		else
		{
			flag=0;
			lineno++;
			printf("%3d:\t",lineno);
			int len=strlen(buf),i,flag1=0;
			for(i=len-3;i>=0;i--)
			{
				if(buf[i]=='$'&&buf[i+1]=='$'&&buf[i+2]=='L')
				{
					flag1=1;
					break;
				}
			}
			if(flag1)
			{
				buf[i]=='\0';
				int k=atoi(&buf[i+3]),j;
				//printf("%s",buf);
				for(j=0;j<i;j++)
					printf("%c",buf[j]);
				printf(" %d\n",Labels[k]);
			}
			else printf("%s",buf);
		}
	}
	printf("%3d:\tend\n",++lineno);
	fclose(f1);
}
