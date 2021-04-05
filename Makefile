all: main

main: main.o check.o
	gcc main.c check.c -o geometry.exe

main.o: main.c
	gcc -c main.c

check.o: check.c
	gcc -c check.c

clean:
	rm -rf *.o main
