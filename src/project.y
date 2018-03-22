%{
	#include<stdio.h>
	#include "symtab.h"
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int tcnt = 1;
	int bal_brack = 0;
	int temp = 0;
	int close_brack = 0;
%}

%token int_const char_const float_const id string type_const DEFINE
%token FOR BREAK SWITCH CONTINUE RETURN CASE DEFAULT or_const and_const eq_const rel_const inc_const
%token point_const param_const ELSE HEADER
%left '+' '-'
%left '*' '/'
%define parse.error verbose
%start program_unit
%%
program_unit				: HEADER program_unit
							| DEFINE primary_exp program_unit
							| translation_unit
							{YYACCEPT;};
translation_unit			: external_decl
							| translation_unit external_decl
							;
external_decl				: function_definition
							| decl
							;
function_definition			: decl_specs declarator decl_list compound_stat
							| declarator decl_list compound_stat
							| decl_specs declarator	compound_stat
							| declarator compound_stat
							;
decl						: decl_specs init_declarator_list ';'
							| decl_specs ';'
							;
decl_list					: decl
							| decl_list decl
							;
decl_specs					: type_spec decl_specs
							| type_spec
							;

type_spec					: type_const
							;

init_declarator_list		: init_declarator
							| init_declarator_list ',' init_declarator
							;
init_declarator				: declarator
							| declarator '=' initializer
							;



declarator					: direct_declarator
							;
direct_declarator			: id
							| '(' declarator ')'
							| direct_declarator '[' const_exp ']'
							| direct_declarator '['	']'
							| direct_declarator '(' param_type_list ')'
							| direct_declarator '(' id_list ')'
							| direct_declarator '('	')'
							;

param_type_list				: param_list
							| param_list ',' param_const
							;
param_list					: param_decl
							| param_list ',' param_decl
							;
param_decl					: decl_specs declarator
							| decl_specs abstract_declarator
							| decl_specs
							;
id_list						: id
							| id_list ',' id
							;
initializer					: assignment_exp
							| '{' initializer_list '}'
							| '{' initializer_list ',' '}'
							;
initializer_list			: initializer
							| initializer_list ',' initializer
							;

abstract_declarator			: direct_abstract_declarator
							;
direct_abstract_declarator	: '(' abstract_declarator ')'
							| direct_abstract_declarator '[' const_exp ']'
							| '[' const_exp ']'
							| direct_abstract_declarator '[' ']'
							| '[' ']'
							| direct_abstract_declarator '(' param_type_list ')'
							| '(' param_type_list ')'
							| direct_abstract_declarator '(' ')'
							| '(' ')'
							;

stat						: labeled_stat
							| exp_stat
							| compound_stat
							| selection_stat
							| iteration_stat
							| jump_stat
							;
labeled_stat				: id ':' stat
							| CASE const_exp ':' stat
							| DEFAULT ':' stat
							;
exp_stat					: exp ';'
							| ';'
							;
compound_stat				: '{' decl_list stat_list '}'
							| '{' stat_list '}'
							| '{' decl_list	'}'
							| '{' '}'
							;
stat_list					: stat
							| stat_list stat
							;
selection_stat				: SWITCH '(' exp ')' stat
							;
iteration_stat				: FOR '(' exp ';' exp ';' exp ')' stat
							| FOR '(' exp ';' exp ';'	')' stat
							| FOR '(' exp ';' ';' exp ')' stat
							| FOR '(' exp ';' ';' ')' stat
							| FOR '(' ';' exp ';' exp ')' stat
							| FOR '(' ';' exp ';' ')' stat
							| FOR '(' ';' ';' exp ')' stat
							| FOR '(' ';' ';' ')' stat
							;
jump_stat					: CONTINUE ';'
							| BREAK ';'
							| RETURN exp ';'
							| RETURN ';'
							;
exp							: assignment_exp
							| exp ',' assignment_exp
							;
assignment_exp				: conditional_exp
							| unary_exp assignment_operator assignment_exp
							;
assignment_operator			:  '='
							;
conditional_exp				: logical_or_exp
							;
const_exp					: conditional_exp
							;
logical_or_exp				: logical_and_exp
							| logical_or_exp or_const logical_and_exp
							;
logical_and_exp				: inclusive_or_exp
							| logical_and_exp and_const inclusive_or_exp
							;
inclusive_or_exp			: exclusive_or_exp
							| inclusive_or_exp '|' exclusive_or_exp
							;
exclusive_or_exp			: and_exp
							| exclusive_or_exp '^' and_exp
							;
and_exp						: equality_exp
							| and_exp '&' equality_exp
							;
equality_exp				: relational_exp
							| equality_exp eq_const relational_exp
							;
relational_exp				: additive_exp
							| relational_exp '<' additive_exp
							| relational_exp '>' additive_exp
							| relational_exp rel_const additive_exp
							;

additive_exp				: mult_exp
							| additive_exp '+' mult_exp
							| additive_exp '-' mult_exp
							;
mult_exp					: unary_exp
							| mult_exp '*' unary_exp
							| mult_exp '/' unary_exp
							| mult_exp '%' unary_exp
							;

unary_exp					: postfix_exp
							| inc_const unary_exp
							;

postfix_exp					: primary_exp
							| postfix_exp '[' exp ']'
							| postfix_exp '(' argument_exp_list ')'
							| postfix_exp '(' ')'
							| postfix_exp inc_const
							;
primary_exp					: id
							| consts
							| string
							| '(' exp ')'
							;
argument_exp_list			: assignment_exp
							| argument_exp_list ',' assignment_exp
							;
consts						: int_const
							| char_const
							| float_const
							;
%%

int main()
{

    printf("\nCode After Stripping off Comments:");
    printf("\n-------------------------------------------------------------------------------------------------\n");
    yyparse();
    printf("\n-------------------------------------------------------------------------------------------------\n");
    if(success)
    	printf("\n\t\t\t\t\tParsing Successful!\n\n");
			int i = 0;
		printf("\n\t\t\t\t\tSYMBOL TABLE\n\n");
		printf("Scope_Num\tTok_Num\t\t Symbol\t\t\tTypeOfToken\t\tLine Number\n");
		printf("----------------------------------------------------------------------------------------------\n");
		for(i = 0; i < tcnt; i ++)
		{
			if(symtab[i].tok_num != 0)
				printf("%5d\t\t%5d\t\t%8s\t\t%8s\t\t%5d\n",symtab[i].scope_num,symtab[i].tok_num,symtab[i].symbol,symtab[i].type,symtab[i].lineno);
		}
		printf("Total number of tokens : %d\n",tcnt);
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}
