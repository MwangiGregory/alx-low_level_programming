#include <stdio.h>

extern char **environ;

char *_getenv(const char *name)
{
	int i, j;
	char *current_var;

	for (i = 0; environ[i]; i++)
	{
		current_var = environ[i];
		for (j = 0; ; j++)
		{
			if (current_var[j] == '=')
				return (current_var);
			if (current_var[j] == name[j])
				continue;
			else
				break;
		}
	}
	return (NULL);
}

int main(int ac, char **argv)
{
	char *env_var;
	int i;

	if (ac < 2)
	{
		printf("Usage: %s VARIABLE_NAME ...\n", argv[0]);
		return (1);
	}
	for (i = 1; argv[i]; i++)
	{
		env_var = _getenv(argv[i]);
		if (!env_var)
			printf("No match to that variable found\n");
		else
			printf("%s\n", env_var);
	}
	return (0);
}
