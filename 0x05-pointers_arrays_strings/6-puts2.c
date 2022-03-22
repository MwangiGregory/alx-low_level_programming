#include "main.h"

/**
 * puts2 - prints every even character
 * @str: address of first element in a string array
 */
void puts2(char *str)
{
	int i = 0;
	char c = *str;

	while (c)
	{
		if (i % 2 == 0)
		{
			_putchar(c);
		}
		i++;
		c = *(str + i);
	}
	_putchar('\n');
}
