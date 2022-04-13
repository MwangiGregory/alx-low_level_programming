#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: number of elements in the array pointed to by array
 * @cmp: pointer to a function
 *
 * Return: Current index if any element matches, -1 if no
 * element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result > 0)
			return (i);
	}
	return (-1);
}
