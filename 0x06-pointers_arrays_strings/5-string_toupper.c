/**
 * string_toupper - changes all lowercase letters to uppercase
 * @text: address of first element in string
 *
 * Return: Always text
 */
char *string_toupper(char *text)
{
	int i = 0;
	char c = text[0];

	while (c)
	{
		if (c >= 'A' && c <= 'Z')
		{
			i++;
			c = text[i];
			continue;
		}
		else if (c >= 'a' && c <= 'z')
		{
			text[i] = c - 32;
			i++;
			c = text[i];
		}
		else
		{
			i++;
			c = text[i];
			continue;
		}
	}
	return (text);
}
