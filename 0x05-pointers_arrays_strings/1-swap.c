/**
 *swap_int - swaps the values of two integers
 *@a: pointer
 *@b: pointer
 */
void swap_int(int *a, int *b)
{
	int A = *a;
	int B = *b;

	*a = B;
	*b = A;
}
