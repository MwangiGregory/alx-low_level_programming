#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - program that prints all possible different combinations
 * of two digits
 * Return: Always 0
 */
int main(void)
{
	int i, j, num1, num2, index, dont_print;
	int array[91] = {0};

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			index = 0;
			if (i == j)
				continue;
			num1 = (i * 10) + j;
			dont_print = 1;
			/*
			 * initialize 1st elem with random value to enable loop
			 * to run
			 */
			array[0] = 234;
			while (array[index])
			{
				if (array[index] == num1)
					dont_print = 0;
				index++;
			}
			num2 = (j * 10) + i;
			array[index] = num2;
			if (dont_print)
			{
				_putchar(i + 48);
				_putchar(j + 48);
				if (num1 == 89)
					_putchar('\n');
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	return (0);
}
