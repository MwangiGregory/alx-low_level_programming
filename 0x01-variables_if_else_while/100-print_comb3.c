#include <stdio.h>
#include <unistd.h>

/**
 * main - program that prints all possible different combinations
 * of two digits
 * Return: Always 0
 */
int main(void)
{
	int i, j, n;

	n = 1;
	for (i = 0; i < 9; i++, n++)
	{
		for (j = n; j <= 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);

			if (i == 8 && j == 9)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
