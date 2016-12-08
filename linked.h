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
int insertEnd(struct head * header, void * data);
int insertBeginning(struct head * header, void * data);
int removeEnd(struct head * header);
int removeBeginning(struct head * header);
int setHeaderName(struct header * header, char * string);

void printList(struct head * header);
void destroyList(struct head * header);



