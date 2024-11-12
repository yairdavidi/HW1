#include "Queue.h"
#include <iostream>
#include <array>
using namespace std;

void initQueue(Queue* q, unsigned int size)
{
	q->arr = new int[size];
    q->capacity = 0;
    q->size = size;
}

void cleanQueue(Queue* q)
{
	delete [] q->arr;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        cout << "The Queue is full, couldn't enqueue" << endl;
        return;
    }

    q->arr[q->capacity] = newValue;
    q->capacity++;
}

int dequeue(Queue* q)
{
    int dequeued = q->arr[0];

    if (isEmpty(q))
    {
        cout << "The Queue is empty, couldn't dequeue" << endl;
        return -1;
    }
    for (int i = 1; i < q->capacity; i++)
    {
        q->arr[i-1] = q->arr[i]; 
    }
    q->capacity--;

    return dequeued;
}

bool isEmpty(Queue* s)
{
    if (s->capacity != 0)
    {
        return false;
    }
    
    return true;
}

bool isFull(Queue* s)
{
    if (s->capacity == s->size)
    {
        return true;
    }

    return false;
}
