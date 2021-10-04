prog: main.o multitable.o
	gcc -o prog main.o multitable.o

main.o: main.c
	gcc -c -o main.o main.c

multitable.o: multitable.c
	gcc -c -o multitable.o multitable.c

clean:
	rm *.o prog
