/**
 * _strlen - returns the length of a string
 * @s: address of first element of string array
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
