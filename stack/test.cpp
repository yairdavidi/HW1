#include "LinkedList.h"
#include <iostream>

int test()
{
	
	list* List = NULL;
	list* node = NULL;

	List = create(20);

	node = create(15);
	List = add(node, List);

	node = create(10);
	List = add(node, List);

	node = create(5);
	List = add(node, List);

	List = remove(List);
	
	return 0;
}
