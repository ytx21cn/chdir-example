compile = gcc -g -Wall -Werror

all: chdir.out

chdir.out: chdir.c
	$(compile) chdir.c -o chdir.out

clean:
	rm *.out
