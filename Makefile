all: main

calculate.o: calculate.cpp
	g++ -o calculate.cpp
geometry.o: geometry.cpp
	g++ -Wall -Werror -o geometry.cpp
clean:
	rm -rf *.o main