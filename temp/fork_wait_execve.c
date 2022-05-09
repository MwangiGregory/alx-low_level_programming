#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid, ls_id;
	int i = 1;
	int status;
	char *av[] = {"/usr/bin/ls", "-l", "/home/vagrant/alx-low_level_programming", NULL};

	while (i <= 5)
	{
		pid = fork();

		if (pid == -1)
		{
			printf("Error. Could not create child process");
			return (0);
		}
		if (pid == 0)
		{
			if (execve(av[0], av, NULL) == -1)
			{
				printf("Error:");
			}
			_exit(EXIT_SUCCESS);
		}
		else
		{
			wait(&status);
			printf("\n------------------------------------------\n");
		}
		i++;
	}
	return (0);
}
