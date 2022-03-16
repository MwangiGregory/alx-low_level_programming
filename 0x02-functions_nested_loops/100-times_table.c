#include "main.h"

/**
 *print_times_table - prints the 9 times table, starting with 0.
 *@n: size of table.
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	while (i <= n)
	{
		if (n < 0 || n > 15)
		{
			break;
		}
		while (j <= n)
		{
			int product = i * j;

			if (product <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (product > 9 && product <= 99)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
			}
			else if (product > 99)
			{
				_putchar(((product / 10) / 10) + '0');
				_putchar(((product / 10) % 10) + '0');
			}
			_putchar((product % 10) + '0');
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
