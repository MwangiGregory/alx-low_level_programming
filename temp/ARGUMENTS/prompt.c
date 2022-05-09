#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prompts a user to enter a text, reads the line
 * and outputs it to the stdout
 * Return: -1 if failed, 0 if succesful
 */
int main(void)
{
	char *line = NULL;
	size_t no_bytes = 8;
	ssize_t read_chars = 0;
	
	printf("$ ");
	read_chars = getline(&line, &no_bytes, stdin);
	if (read_chars == -1)
	{
		free(line);
		printf("Error: Failed to read line\n");
		exit(-1);
	}
	
	printf("%s", line);
	free(line);
	return (0);
}
