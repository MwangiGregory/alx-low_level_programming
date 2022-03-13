#include <stdio.h>

/**
 *main - entry point
 *
 * Description: prints all numbers
 * of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 succesful, 1 failed execution.
 */
int main(void)
{
	char num = '0';
	char character = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (character <= 'f')
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
