#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* s = new Stack;
	initStack(s);

	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}

	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
}

int* reverse10()
{
	unsigned int size = 0;
	int* nums = new int[size];

	std::cout << "Please enter size of array: " << std::endl;
	std::cin >> size;

	std::cout << "Please enter " << size << " numbers:" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter number " << (i + 1) << ": ";
		std::cin >> nums[i];
	}

	reverse(nums, size);

	return nums;
}