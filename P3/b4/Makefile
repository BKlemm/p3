
.PHONY: run clean

all: a14

a14: a14.c
	cc -g -ansi -pedantic -Wall a14.c -o a14

run: a14
	valgrind -q ./a14
	
clean: rm a14
