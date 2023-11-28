CC =gcc
CCFLAGS=-03
matmult: main.o matmul.o
	$(CC) -o matmult main.o matmul.o
matmul.o: matmul.c
	$(CC) -c $(CCFLAGS) matmul.c
main.o: main.c
	$(CC) -c $(CCFLAGS) main.c