/**
 * _strncpy - copies at most n bytes of src.
 * if the length of src is less than n, _strncpy()
 * writes additional null bytes to dest to ensure a total
 * of n bytes are written.
 * @dest: String to be edited
 * @src: Copied string
 * @n: number of bytes of src to copy
 *
 * Return: Always dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		return (dest);
	}
	while (i < n)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[i];
			j++;
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
