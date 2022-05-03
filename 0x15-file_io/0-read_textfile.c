#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

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
	written = write(STDOUT_FILENO, content, letters);
	if (written == -1 || wriiten < letters)
		return (0);
	content[written - 1] = '\0';
	close(fd);
	free(content);
	return (written);
}
