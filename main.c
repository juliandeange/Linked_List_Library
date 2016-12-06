#include "linked.h"

int main() {

	int i;
	struct head * header;
	header = buildList();
	i = addNode(header, "hello");
	i = addNode(header, "world");

	printList(header);

	destroyList(header);

	return 0;

}
