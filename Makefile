#
# Makefile
#
# Computer Science 50
# Problem Set 3
#

all: find generate

compileTests: test.c helpers.c helpers.h
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -o test test.c helpers.c -lcs50 -lm

find: find.c helpers.c helpers.h
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -o find find.c helpers.c -lcs50 -lm

generate: generate.c
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -o generate generate.c

cleanItOut:
	rm -f *.o a.out core find generate
