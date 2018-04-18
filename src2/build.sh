clear
lex project.l
yacc -d -v project.y
gcc y.tab.c lex.yy.c -ll -ly
./a.out < inputcodegen1.c > lexicalop.txt
