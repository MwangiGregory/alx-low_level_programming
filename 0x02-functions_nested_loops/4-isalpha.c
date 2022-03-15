/**
 *_isalpha - checks for alphabetic character
 *@c: Ascii value to be tested
 *
 *Return: Is alpabetic character 1,
 *Otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
