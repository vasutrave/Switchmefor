
#include<stdio.h>


typedef struct entry{
	int tok_num;
	char symbol[32];
	char type[32];
	int lineno;
} entry;
	entry symtab[256];

	
