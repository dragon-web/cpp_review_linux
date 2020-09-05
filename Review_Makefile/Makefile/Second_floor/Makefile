CC := gcc 
Tar = test
Obj = test.i test.o test.s
$(Tar):%.c
	$(CC) %.c -o $(Tar)
.PHONY:
clear:
	rm -f $(Tar)
clearall:
	rm -f $(Obj)
