#include <string.h>
#include <stdio.h>

void split_string(char *line, char **stings, char *delim);

int main(void)
{
	char line[] = "My name is Gregory. I love programming";
	char *strings[7];
	char *delim = " ";
	int i = 0;

	split_string(line, strings, delim);

	while (strings[i])
	{
		printf("%s\n", strings[i]);
		i++;
	}
	return (0);	
}

void split_string(char *line, char **strings, char *delim)
{
	char *token;
	int i = 0;

	token = strtok(line, delim);
	strings[i] = token;
	i++;
	while (token)
	{
		token = strtok(NULL, delim);
		strings[i] = token;
		i++;
	}
}


