#include "linked.h"

struct head * buildList() {

	struct head * str;
	str = calloc(1, sizeof(struct head));
	if (str == NULL) {
		return FAILURE;
	}
	return str;
}

int insertEnd(struct head * header, void * data) {

	if (header == NULL)
		return FAILURE;

	struct node * add;
	struct node * loopVar;
	loopVar = header->next;

	add = calloc(1, sizeof(struct node));
	if (add == NULL)
		return FAILURE;

	add->data = data;
	add->next = NULL;

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

int insertBeginning(struct head * header, void * data) {

	if (header == NULL)
		return FAILURE;

	struct node * add;
	struct node * temp;

	add = calloc(1, sizeof(struct node));
	if (add == NULL)
		return FAILURE;

	add->data = data;
	add->next = header->next;
	header->next = add;

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

void destroyList(struct head * header) {

	struct node * loopVar;
	struct node * temp;
	loopVar = header->next;

	while (loopVar != NULL) {
		temp = loopVar;
		loopVar = loopVar->next;
		free(temp);
	}
	free(header->name);
	free(header);

}

int setHeaderName(struct head * header, char * string) {

	if (header == NULL)
		return FAILURE;

	header->name = calloc(1, sizeof(char) * strlen(string) + 1);
	strcpy(header->name, string);
	return SUCCESS;

}





