#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and intializes it with a specific char.
 * @size: size of the array
 * @c: character used to initialize array
 *
 * Return: Null if array size is 0 or if malloc fails,
 * otherwise return pointer to newly allocated memory.
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	ch = malloc(size * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	return (ch);
}
