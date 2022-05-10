#include <sys/stat.h>
#include <stdio.h>

int main(int ac, char *argv[])
{
	int i;
	struct stat file_info;

	if (ac < 2)
	{
		printf("Usage: %s filename ...\n", argv[0]);
		return (1);
	}

	for (i = 1; argv[i]; i++)
	{
		if (stat(argv[i], &file_info) == 0)
			printf("%s found\n", argv[i]);
		else
			printf("%s not found in current path\n", argv[i]);
	}
	return (0);
}
