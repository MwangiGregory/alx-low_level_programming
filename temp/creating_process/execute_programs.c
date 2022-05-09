#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *av[] = {"/usr/bin/ls", "-al", NULL};
	int result = 0;

	result = execve(av[0], av, NULL);
	if (result == -1)
	{
		printf("Error");
	}

	return (0);
}
