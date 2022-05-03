#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
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

/**
 * create_file - creates a file
 * @filename: pointer to a filename
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written = 0, str_len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	str_len = _strlen_recursion(text_content);
	written = write(fd, text_content, str_len);
	if (written == -1 || written < str_len)
		return (-1);
	close(fd);
	return (1);
}
