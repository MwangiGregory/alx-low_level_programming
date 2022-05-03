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
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to a file name
 * @text_content: pointer to a string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written = 0, str_len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	str_len = _strlen_recursion(text_content);
	written = write(fd, text_content, str_len);
	if (written == -1)
		return (-1);
	close(fd);
	return (1);

}
