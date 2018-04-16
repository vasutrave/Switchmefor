
#include<stdio.h>


typedef struct entry{
	int tok_num;
	int scope_num;
	char symbol[32];
	char type[32];
	int lineno;
	size_t size;
} entry;
	entry symtab[256];

	

/*

1: for
	11: for
	12: for
		121: for

scope_count = 0;

*/
