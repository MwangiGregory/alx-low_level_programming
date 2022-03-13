#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers 0-9
 * Return: 0 successful, 1 failed execution
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
