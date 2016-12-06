#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SUCCESS 1
#define FAILURE 0

struct node {
	void * data;
	struct node * next;
};

struct head {
	void * data;
    struct node * next;
};

struct head * buildList();
int addNode(struct head * header, void * data);
void printList(struct head * header);
int destroyList(struct head * header);

