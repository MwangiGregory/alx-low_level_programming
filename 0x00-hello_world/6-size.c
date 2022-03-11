#include <stdio.h>
/**
 *main - Entry point
 *@c - character
 *@i - integer
 *@l - long integer
 *@L - long long integer
 *@f - floating point
 *
 * Description: prints the sizes of different data types in bytes
 * Return: 0 (Successful)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int L;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
