/**
 * _strlen_recursion - find the length of a string using recursion
 * @s: pointer to a string
 *
 * Return: Always the length of string pointed to by s. Length excludes
 * the EOF character
 */
int _strlen_recursion(char *s)
{
	if (!(s[0]))
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
