#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to string that separates
 * printed numbers
 * @n: Number of intgers passed as optional arguments
 * @...: Optional arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ap, n);

	for (i = 1; i < n; i++)
	{
		if (separator)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("%d", va_arg(ap, int));
	va_end(ap);
}
