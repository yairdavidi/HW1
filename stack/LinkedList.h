#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct list
{
	unsigned int val;
	struct list* next;

} list;

list* create(unsigned int val);
list* add(list* node, list* List);
list* remove(list* List);

#endif