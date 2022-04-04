#include <stdio.h>
/**
 * main - entry point
 * Prints all the arguments it receives including the
 * first one.
 * @argc: size of argv
 * @argv: array of pointers to strings
 *
 * Return: 0 if successful, anything else otherwise
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
