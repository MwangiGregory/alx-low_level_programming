/**
 * _strcat - concatenates two strings and adds a
 * terminating byte at the end
 * @dest: string to be appended
 * @src: string added to dest
 *
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char c = *dest;

	while (c)
	{
		i++;
		c = *(dest + i);
	}
	c = *src;
	while (c)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
		c = *(src + j);
	}
	if (c == '\0')
	{
		*(dest + i) = *(src + j);
	}
	return (dest);
}
