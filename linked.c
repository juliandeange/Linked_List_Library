#include "linked.h"

struct head * buildList() {

	struct head * str;
	str = calloc(1, sizeof(struct head));
	if (str == NULL) {
		return FAILURE;
	}
	return str;
}

int add(struct head * header, void * data) {

	struct node * node;
	node = calloc(1, sizeof(struct node));
	node = add;


	return SUCCESS;
}
