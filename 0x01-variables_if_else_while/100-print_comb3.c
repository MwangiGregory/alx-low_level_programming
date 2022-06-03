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
			_putchar(i + 48);
			_putchar(j + 48);

			if (i == 8 && j == 9)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	return (0);
}
