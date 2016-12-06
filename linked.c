#include "linked.h"

struct head * buildList() {

	struct head * str;
	str = calloc(1, sizeof(struct head));
	if (str == NULL) {
		return FAILURE;
	}
	return str;
}

int addNode(struct head * header, void * data) {

	if (header == NULL)
		return FAILURE;

	struct node * add;
	struct node * loopVar;
	loopVar = header->next;

	add = calloc(1, sizeof(struct node));
	add->data = data;

	if (header->next == NULL)
		header->next = add;
	else {
		loopVar = header->next;
		while (loopVar->next != NULL)
			loopVar = loopVar->next;
		loopVar->next = add;
	}

	return SUCCESS;
}

void printList(struct head * header) {

	struct node * loopVar;
	loopVar = header->next;
	while (loopVar != NULL) {
		printf("%s\n", loopVar->data);
		loopVar = loopVar->next;
	}

}

int destroyList(struct head * header) {

	struct node * loopVar;
	struct node * temp;
	loopVar = header->next;

	while (loopVar != NULL) {
		temp = loopVar;
		loopVar = loopVar->next;
		free(temp);
	}
	free(header);

	return SUCCESS;

}





