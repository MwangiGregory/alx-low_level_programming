/**
 * _strncat - a function that concatenates two strings.
 * it will use at most n bytes from src.
 * @dest: string to be appended
 * @src: string added to dest.
 * @n: number of bytes of src to append to dest
 *
 * Return: Always dest. The concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	char c = *dest;

	if (n > 0)
	{
		while (c)
		{
			i++;
			c = *(dest + i);
		}
		while (j < n)
		{
			if (*(src + j) == '\0')
			{
				return (dest);
			}
			else
			{
				*(dest + i) = *(src + j);
				i++;
				j++;
			}
		}
	}
	return (dest);
}
