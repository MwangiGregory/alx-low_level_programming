#include "main.h"

/**
 * puts_half - prints half the string
 * @str: address of first element in string array
 */
void puts_half(char *str)
{
	int n = 0;
	int i = 0;
	char c = *str;

	while (c)
	{
		i++;
		c = *(str + i);
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
		n++;
	}
	c = *str;
	while (c)
	{
		if (c == '\0')
		{
			_putchar('e');
		}
		c = *(str + n);
		_putchar(c);
		n++;
	}
	_putchar('\n');
}
