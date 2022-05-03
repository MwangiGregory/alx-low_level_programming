#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
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
 * read_textfile - reads a text file and prints it to the standard
 * output
 * @filename: pointer to a filename
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rbytes, written;
	char *content;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	content = malloc(sizeof(*content) * letters);
	if (content == NULL)
		return (0);
	rbytes = read(fd, content, letters);
	if (rbytes == -1)
		return (0);
	written = write(STDOUT_FILENO, content, _strlen_recursion(content));
	if (written == -1)
		return (0);
	if (written < _strlen_recursion(content))
		return (0);
	content[written - 1] = '\0';
	close(fd);
	free(content);
	return (written);
}
