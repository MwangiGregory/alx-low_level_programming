#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints out a character
 * @ap_char: pointer to an optional argument in print_all
 */
void print_char(va_list ap_char)
{
	printf("%c", va_arg(ap_char, int));
}

/**
 * print_int - prints out an integer
 * @ap_int: pointer to an optional argument in print_all
 */
void print_int(va_list ap_int)
{
	printf("%d", va_arg(ap_int, int));
}
/* TODO finish other functions and add print_all */
