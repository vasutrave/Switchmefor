
yacc -d -v ast.y
lex ast.l
gcc lex.yy.c y.tab.c graph.c -ll -ly
./a.out
