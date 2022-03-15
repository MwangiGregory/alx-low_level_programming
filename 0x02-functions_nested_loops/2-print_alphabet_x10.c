#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet
 *in lowercase, 10 times followed by
 *a new line.
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char c = 'a';

	while (i <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 'a';
		i++;
	}
}
