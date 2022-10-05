#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array using the binary search algorithm.
 * @array: pointer to an array
 * @size: length of array
 * @value: Value to search for
 * Return: Index where value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, middle = 0;
	unsigned int right = size - 1;
	unsigned int l;

	if (!array || size == 0)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array:");
		for (l = left; l <= right; l++)
		{
			if (l == right)
				printf(" %d\n", array[l]);
			else
				printf(" %d,", array[l]);
		}
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (value > array[middle])
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
