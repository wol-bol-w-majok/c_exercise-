all: dotProd3

CC = gcc
CFLAGS = -Wall -Wextra -g

dotProd3: main.o dotProd.o
	$(CC) $(CFLAGS) -o $@ main.o dotProd.o

main.o: main.c dotProd.h
	$(CC) $(CFLAGS) -c main.c

dotProd.o: dotProd.c dotProd.h
	$(CC) $(CFLAGS) -c dotProd.c

clean:
	rm -f *.o dotProd3

.PHONY: all clean
