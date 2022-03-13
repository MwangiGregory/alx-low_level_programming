#include <stdio.h>

/**
 *main - Entry point
 *@character - stores a character in the alphabet
 *
 * Description - prints alphabet in lowercase
 * Return: 0 successful 1 failed execution.
 */
int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
