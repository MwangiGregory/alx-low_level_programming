#include "main.h"

/**
 * print_line - draws a straight line in the terminal,
 * followed by a new line.
 * @n: number of times _ should be printed
 */
void print_line(int n)
{
	int i;
	char c = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
