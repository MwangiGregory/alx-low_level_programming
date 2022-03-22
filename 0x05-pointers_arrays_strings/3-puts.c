#include "main.h"

/**
 * _puts - prints a string, followed by
 * a new line to stdout.
 * @str: address of first element in character
 * array
 */
void _puts(char *str)
{
	char c = *str;
	int i = 0;

	while (c)
	{
		_putchar(c);
		i++;
		c = *(str + i);
	}
	_putchar('\n');
}
