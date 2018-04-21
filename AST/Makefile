all:
	yacc -d -v cparser.y
	lex clexer.l
	gcc  -c -g y.tab.c lex.yy.c definition.c symbolTable.c 
	gcc  -o start y.tab.o lex.yy.o definition.o symbolTable.o 

clean:
	rm *.o
	rm y.tab.c lex.yy.c y.output y.tab.h
