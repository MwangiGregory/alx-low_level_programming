/**
 * reverse_array - reverses the content of an array
 * of intgers.
 * @a: address of first element in integer array.
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int num = 0;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			num = a[i];
			a[i] = a[n - i];
			a[n - i] = num;
			i++;
			n--;
		}
	}
}
