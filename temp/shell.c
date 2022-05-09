#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - a super simple shell that can run commands with their
 * full path, without any argument
 * Return: Always 0
 */
int main(void)
{
	int status, j = 1, i;
	char *line = NULL;
	char *av[2];
	size_t n;
	pid_t my_pid;
	
	while (j)/*infinite loop*/
	{
		printf("#cisfun$ ");
		if (getline(&line, &n, stdin) == -1)
		{
			printf("Error. Could not read line.\n try again\n");
			free(line);
			continue;
		}
		for (i = 0; line[i]; i++)
		{
			if (line[i] == '\n')
				line[i] = '\0';
		}
		av[0] = line;
		av[1] = NULL;
		my_pid = fork();
		if (my_pid == -1)
		{
			printf("Error. Unable to create child process\n");
			continue;
		}
		if (my_pid == 0)
		{
			if (execve(av[0], av, NULL) == -1)
			{
				printf("Error. Unable to execute %s\n", av[0]);
				_exit(EXIT_FAILURE);
			}
			_exit(EXIT_SUCCESS);
		}
		else
		{
			wait(&status);
		}
	}
	return (EXIT_SUCCESS);
}
