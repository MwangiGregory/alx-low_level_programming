#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lower case alphabet
 * in reverse.
 * Return: 0 successful, 1 failed execution
 */
int main(void)
{
	char lower_case = 'z';

	while (lower_case >= 'a')
	{
		putchar(lower_case);
		lower_case--;
	}
	putchar('\n');
	return (0);
}
