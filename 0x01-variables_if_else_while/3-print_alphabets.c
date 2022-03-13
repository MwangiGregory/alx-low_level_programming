#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lower case letters
 * followed by uppercase letters
 * Return: 0 successful 1 failed execution
 */
int main(void)
{
	char upper_case = 'A';
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');
	return (0);
}
