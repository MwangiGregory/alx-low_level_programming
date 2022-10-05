#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the linear search algorithm.
 * @array: pointer to an array of integers
 * @size: size of the array
 * @value: the value to search for
 * Return: first index where value is located, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
