
test:test.o
	gcc test.o -o test
test.o:test.s
	gcc -c test.i -o test.o
test.s:test.i
	gcc -S test.i -o test.s
test.i:test.c
	gcc -E test.c -o test.i 
.PHONY:
clear:
	rm -f test.o test.i test.s test
