#include "main.h"

/**
 * puts_half - prints half a string.
 * @str: address of frist element in
 * character array
 */
void puts_half(char *str)
{
	char c = *str;
	int i = 0;
	int n = 0;

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
	while (n < i)
	{
		c = *(str + n);
		if (c != '\0')
		{
			_putchar(c);
		}
		n++;
	}
	printf("\n");
}
