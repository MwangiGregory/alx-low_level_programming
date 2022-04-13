#include <stdlib.h>
/**
 * print_name - prints a name via callbacks
 * @name:pointer to a string
 * @f:pointer to a function that takes a pointer-to-char as an argument
 * and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
