#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lower case letters
 * except q and e.
 * Return: 0 successful, 1 failed execution
 */
int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		if (lower_case != 'q' && lower_case != 'e')
		{
			putchar(lower_case);
		}
		lower_case++;
	}
	putchar('\n');
	return (0);
}
