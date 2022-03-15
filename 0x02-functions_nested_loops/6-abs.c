/**
 *_abs - returns absolute value of a number
 *@n: number to be checked
 *
 *Return: absolute value of n (successful)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
