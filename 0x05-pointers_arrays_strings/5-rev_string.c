#include <stdio.h>

/**
 * rev_string - it reverses a string
 * @s: address of first element in a character array
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c = *s;

	while (c)
	{
		i++;
		c = *(s + i);
	}
	i--;
	while (j <= i)
	{
		c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		j++;
		i--;
	}
}
