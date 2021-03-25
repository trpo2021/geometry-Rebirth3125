all: main

main: main.o check.o calculate.o geometry.o
		g++ main.o check.o calculate.o -o geometry.exe

main.o: main.cpp
			g++ -c main.cpp

check.o: check.cpp
	g++ -o check.cpp

calculate.o: calculate.cpp
	g++ -o calculate.cpp

geometry.o: geometry.cpp
	g++ -Wall -Werror -o geometry.cpp

clean:
	rm -rf *.o main
