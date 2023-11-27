CC = gcc
CFLAGS = -O3
LDFLAGS = -lm

all: matmult

matmult: main.o matmult.o
	$(CC) -o $@ $^ $(LDFLAGS)

matmult.o: matmult.c
	$(CC) -c $(CFLAGS) $<

main.o: main.c
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f *.o matmult
