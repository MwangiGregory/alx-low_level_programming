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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(L));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
