#include "linked.h"

int main() {

	int i;
	struct head * header;
	header = buildList();
	i = insertEnd(header, "hello");
	i = insertEnd(header, "world");
	i = insertBeginning(header, "begin");
	i = insertBeginning(header, "again");

	printList(header);

	

	destroyList(header);

	return 0;

}

