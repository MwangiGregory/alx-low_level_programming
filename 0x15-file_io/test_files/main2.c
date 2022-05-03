#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	int fd;
	char *filename = "my-file";

	fd = open(filename, O_RDONLY, 0700);
	if (fd == -1)
		printf("Error. No file found\n");	
	return (0);
}
