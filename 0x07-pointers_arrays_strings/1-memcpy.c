/**
 * _memcpy - copies n bytes from memory area src to
 * memory area dest
 * @dest: destination address
 * @src: source address
 * @n: number of bytes to copy from src
 *
 * Return: Always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		if (src[i])
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			return (dest);
		}
	}
	return (dest);
}
