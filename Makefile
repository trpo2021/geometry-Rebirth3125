all: main

main: main.o check.o calculate.o
	gcc main.o check.o calculate.o -o geometry.exe

main.o: main.c
	gcc -c main.c

check.o: check.c
	gcc -o check.c

calculate.o: calculate.c
	gcc -o calculate.c

clean:
	rm -rf *.o main
