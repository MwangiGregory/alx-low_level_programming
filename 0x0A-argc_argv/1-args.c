#include <stdio.h>
/**
 * main - entry point
 * It prints the numbers of arguments passed to the program
 * @argc: size of argv
 * @argv: array of pointers to strings
 *
 * Return: 0 if successful, anything else otherwise
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
