#include "linked.h"

int main() {

	int i;
	struct head * header;
	header = buildList();
	i = insertEnd(header, "hello");
	i = insertEnd(header, "world");
	i = insertBeginning(header, "begin");
	i = insertBeginning(header, "again");
	i = setHeaderName(header, "temp name");

	printf("%s\n", header->name);
	printList(header);

	destroyList(header);

	return 0;

}

