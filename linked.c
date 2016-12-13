#include "linked.h"

struct head * buildList() {

	struct head * header;
	header = calloc(1, sizeof(struct head));
	if (header == NULL) {
		return FAILURE;
	}
	header->length = 0;
	return header;
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

	header->length = header->length + 1;
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

	header->length = header->length + 1;
	return SUCCESS;

}

int removeEnd(struct head * header) {

	struct node * loopVar;
	struct node * prev;

	loopVar = header->next;

	if (header->length > 2) {
		while (loopVar->next != NULL) {
			prev = loopVar;
			loopVar = loopVar->next;
		}
		free(loopVar);
		prev->next = NULL;
	}
	else if (header->length < 2) {
		free(loopVar);
		header->next = NULL;
	}	

	return SUCCESS;

}

int removeBeginning(struct head * header) {

	return SUCCESS;

}

void printList(struct head * header) {

	struct node * loopVar;
	loopVar = header->next;
	while (loopVar != NULL) {
		printf("%s\n", loopVar->data);
		loopVar = loopVar->next;
	}
	printf("---------\n");

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
	if (header == NULL)
		return FAILURE;

	strcpy(header->name, string);
	return SUCCESS;

}





