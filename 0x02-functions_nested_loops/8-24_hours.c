#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour <= 23)
	{
		while (min <= 59)
		{
			if (hour <= 9)
			{
				_putchar('0');
				_putchar(hour + '0');
				_putchar(':');
			}
			if (hour >= 10)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
			}
			if (min <= 9)
			{
				_putchar('0');
				_putchar(min + '0');
				_putchar('\n');
			}
			if (min >= 10)
			{
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
				_putchar('\n');
			}
			min++;
		}
		hour++;
		min = 0;
	}
}
