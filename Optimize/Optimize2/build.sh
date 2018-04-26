clear
lex opt2.l
yacc -v opt2.y
gcc lex.yy.c y.tab.c -ll -ly
./a.out < op1
