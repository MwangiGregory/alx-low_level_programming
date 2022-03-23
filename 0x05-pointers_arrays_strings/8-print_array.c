#include <stdio.h>

/**
 * print_array - prints n elements of
 * an array of integers, followed by a
 * new line.
 * @a: address of first element in array
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			if (i == (n - 1))
			{
				printf("%d\n", *(a + i));
			}
			else
			{
				printf("%d, ", *(a + i));
			}
			i++;
		}
	}
	else
	{
		printf("\n");
	}
}
