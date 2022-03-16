#include <stdio.h>

/**
 *main - computes and prints the sum of all the multiples
 *of 3 or 5 below 1024 (excluded),
 *followed by a new line.
 *
 * Return: Always 0 succesful execution
 */
int main(void)
{
	int sum = 0;
	int i = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 15 == 0)
		{
			sum += i;
		}
		else if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
