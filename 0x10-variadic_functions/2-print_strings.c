#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: pointer to string used to separate printed strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		str = va_arg(ap, char *);
		if (i == n || separator == NULL)
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		else
		{
			if (str == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}

	}
	va_end(ap);
	printf("\n");
}
