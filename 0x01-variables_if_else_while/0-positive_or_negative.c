#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@n - random number
 *
 *Description: Prints whether a number is +ve, -ve or zero
 *Return: 0 (success), anything else (failure)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;

	if (n > 0)
	{
		printf("%d: is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d: is zero\n", n);
	}
	else
	{
		printf("%d: is negative\n", n);
	}
	return (0);
}
