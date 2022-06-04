#include <stdio.h>

/**
 * main - a program that prints all possible different
 * combinations of three digits.
 * Return: 0 on success
 */
int main(void)
{
	int dig1, dig2, dig3;
	int m, n;
	int i = 1, j = 2;

	for (dig1 = 0; dig1 <= 7; dig1++, i++, j++)
	{
	m = i, n = j;
		for (dig2 = m; dig2 <= 8; dig2++, n++, m++)
		{
			for (dig3 = n; dig3 <= 9; dig3++)
			{
				putchar(dig1 + 48);
				putchar(dig2 + 48);
				putchar(dig3 + 48);
				if (dig1 == 7)
				{
					putchar('\n');
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
