#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(nt argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	copy_to_file(argv[1], argv[2]);

	return (0);
}

int copy_to_file(char *file_from, char *file_to)
{
	int fd;
	char *temp_string;

	if (file_from == NULL)
		return (98);
	
}
