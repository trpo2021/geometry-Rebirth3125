main: clear check.a
	gcc -Wall -Wextra -Werror check.a -o geometry.exe

check.o:
	gcc -I src -c src/libgeometry/check.c

main.o:
	gcc -I src -c src/geometry/main.c

check.a: check.o main.o
	ar rcs check.a *.o

test: check.o tmain.o test.o
	gcc check.o tmain.o test.o -o test

tmain.o:
	gcc -I src -c thirdparty/tmain.c

test.o:
	gcc -I src -c thirdparty/test.c

clear:
	rm -rf *.o
	rm -rf *.a
	rm -rf *.exe
