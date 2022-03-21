/**
 * _strlen - returns the length of a string
 * @c: temporarily holds value of
 * current array element
 * @i: counter
 *
 * Return: length of string whose address is s
 */
int _strlen(char *s)
{
	char c;
	int i = 0;

	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}
	return (i);
}
