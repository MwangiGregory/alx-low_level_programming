#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int copy_to_file(char *src_file, char *dest_file, int *fd);
/**
 * main - entry point. Checks for errors from copy to file
 * @argc: number of elements in argv
 * @argv: array of string pointers
 * Return: O if succesful, 97 if incorrect number of arguments were passed,
 * 98 if  file_from does not exist, or if you can not read it,
 * 99 if you can not create or if write to file_to fails,
 * 100 if you can not close a file descriptor
 */
int main(int argc, char **argv)
{
	int res;
	int fd = 0;

	if (argc != 3)/*incorrect no. of arguments*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = copy_to_file(argv[1], argv[2], &fd);
	if (res == 98)/*file_from does not exist*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(res);
	}
	if (res == 99)/*write fails*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(res);
	}
	if (res == 100)/*cannot close file descriptor*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(res);
	}
	return (0);
}
/**
 * copy_to_file - copies the content of a file to another file
 * @src_file: pointer to source file name
 * @dest_file: pointer to destination file name
 * @fd: pointer to a int representing a file descriptor
 * Return: O if succesful, 97 if incorrect number of arguments were passed,
 * 98 if  file_from does not exist, or if you can not read it,
 * 99 if you can not create or if write to file_to fails,
 * 100 if you can not close a file descriptor
 */
int copy_to_file(char *src_file, char *dest_file, int *fd)
{
	int fd_src, fd_dest, res_read = 1, res_write, res, i = 0;
	char content[1024] = {0};
	(void)res_write;

	if (src_file == NULL)
		return (98);
	fd_src = open(src_file, O_RDONLY);
	if (fd_src == -1)
		return (98);
	fd_dest = open(dest_file, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_dest == -1)
		return (99);
	while (res_read)
	{
		res_read = read(fd_src, content, 1024);
		if (res_read == -1)
			return (98);
		res_write = write(fd_dest, content, res_read);
		if (res_write == -1)
			return (99);
		while (i < 1024)
		{
			content[i] = '\0';
			i++;
		}
	}
	res = close(fd_src);
	if (res == -1)
	{
		*fd = fd_src;
		return (100);
	}
	res = close(fd_dest);
	if (res == -1)
	{
		*fd = fd_dest;
		return (100);
	}
	return (0);
}
