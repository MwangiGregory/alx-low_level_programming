#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point. Performs operation inputed by user
 * @argc: number of elements in argv
 * @argv: pointers to strings inputed by user
 *
 * Return: Success 0,on failure return 98 if number of arguments passed
 * is wrong , 99 if invalid operator is passed, 100 if user tries to
 * divide by 0
 */
int main(int argc, char **argv)
{
	int (*func)(int, int);
	int result;

	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}
	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
