#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point. Multiplies two numbers and
 * prints them out.
 * @argc: number of arguments passed to program
 * @argv: pointers to arguments
 *
 * Return: 0 if successful, 1 for failed execution
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int mul = a * b;

		printf("%d\n", mul);
		return (0);
	}
}
