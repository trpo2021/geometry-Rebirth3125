all: main

main: main.o check.o calculate.o
		g++ main.o check.o calculate.o -o geometry.exe

main.o: main.cpp
			g++ -c main.cpp

check.o: check.cpp
	g++ -o check.cpp

calculate.o: calculate.cpp
	g++ -o calculate.cpp

clean:
	rm -rf *.o main
