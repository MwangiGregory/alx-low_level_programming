/**
 * _isupper - checks for uppercase character
 * @c: ascii character to be checked
 *
 * Return: 1 if C is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
