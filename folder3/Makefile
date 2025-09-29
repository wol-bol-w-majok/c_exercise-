all: dotProd3 

dotProd3: main.o dotProd.o
	gcc -o dotProd3 main.o dotProd.o 

main.o:main.c dotProd.h
	gcc -c main.c

dotProd.o: dotProd.c dotProd.h
	gcc -C dotProd.c

clean:
	rm -f *.o dotProd
