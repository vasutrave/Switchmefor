clear
lex opt.l
yacc -v -d opt.y
gcc y.tab.c lex.yy.c -ll -ly
./a.out < IC1.txt > op1
./a.out < IC2.txt > op2
