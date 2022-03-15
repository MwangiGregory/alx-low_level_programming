#include "main.h"

/**
 *print_alphabet - prints alphabet in lowercase,
 *followed by a new line
 *@c: Lowercase letter of the alphabet.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
