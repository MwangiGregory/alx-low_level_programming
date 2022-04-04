#include "main.h"

/**
 * create_array - creates array of chars & initializes with specific char
 * @size: size of array
 * @c: character to initialize
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	else
	{
		char *s = (char *)malloc(size * sizeof(char));
		unsigned int i;

		for (i = 0; i < size; i++)
			s[i] = c;

		return (s);
		free(s);
	}
}
