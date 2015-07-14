all: test
test : helloworld.o
	gcc -Wall -o test helloworld.o
helloworld.o : helloworld.c
	gcc -Wall -c helloworld.c
clean :
	rm test *.o
