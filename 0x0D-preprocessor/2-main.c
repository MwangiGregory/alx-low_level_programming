#include <unistd.h>
#include "main.h"
/**
 * main - entry point. Prints name of the current input file.
 *
 * Return: On success 0, anything else on failure
 */
int main(void)
{
	char *str = __FILE__;

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
