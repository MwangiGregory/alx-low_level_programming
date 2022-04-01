#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to this program
 * @argv: an array of pointers to strings
 *
 * Return: Succesful execution 0, failed execution 1.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if ((*argv[i]) >= '0' && (*argv[i]) <= '9')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
