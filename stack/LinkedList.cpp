#include "LinkedList.h"
#include <iostream>
#include <array>
using namespace std;

list* create(unsigned int val)
{
	list* node = new list;
	node->val = val;
	node->next = NULL;

	return node;
}

list* add(list* node, list* List)
{
	node->next = List;

	return node;
}

list* remove(list* List)
{
	list* to_free = List;
	List = List->next;

	delete to_free;

	return List;
}