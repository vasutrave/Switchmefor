lex project.l
yacc -d project.y
gcc y.tab.c lex.yy.c -ll -ly
./a.out < input.c
