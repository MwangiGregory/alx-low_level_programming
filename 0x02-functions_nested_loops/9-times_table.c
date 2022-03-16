#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			int product = i * j;

			if (product <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
			if (j <= 8)
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
