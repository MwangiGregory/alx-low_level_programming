#include <stdlib.h>

/**
 * array_iterator - executes function pointed to by action on each element
 * of array
 * @array: pointer to array of integers
 * @size: size of array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
