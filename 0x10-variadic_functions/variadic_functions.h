#ifndef VARIADIC
#define VARIADIC
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct Choose_func - associates a format
 * specifier with appropriate function pointer
 * to be excecuted.
 * @c: format specifier character
 * @output_sth: pointer to a function that prints
 * something
 */
typedef struct Choose_func
{
	char c;
	void (*output_sth)(va_list);
} choose_func;
#endif
