#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *@n - stores a random number
 *@last_digit - stores last digit on n
 *
 *Description: The last digit
 *Return: 0 (succesful), 1 (failed execution)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not
0\n", n, last_digit);
	}
	return (0);
}
