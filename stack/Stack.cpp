#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	list* node = create(element);
	s->List = add(node, s->List);
	s->capacity++;
}

int pop(Stack* s)
{
	int value = s->List->val;
	s->List = remove(s->List);
	s->capacity--;

	return value;
}

void initStack(Stack* s)
{
	s->List = NULL;
	s->capacity = 0;
}

void cleanStack(Stack* s)
{
	for (s->capacity; s->capacity > 0; s->capacity--)
	{
		s->List = remove(s->List);
	}
}

bool isEmpty(Stack* s)
{
	return !s->capacity;
}

bool isFull(Stack* s)
{
	return false;
}
