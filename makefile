listio: linked.c linked.h
	gcc -c linked.c -o linked.o -g
	ar cr liblinked.a linked.o
	gcc main.c linked.o -L. -llinked -g
