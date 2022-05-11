#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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

char *_strcpy(char *dest, char *src)
{
        int i;

        if (!dest || !src)
                return (NULL);
        for (i = 0; src[i]; i++)
                dest[i] = src[i];
        dest[i] = '\0';

        return (dest);
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

int main(void)
{
	char *var_name = "PATH";
	char *path = _getenv(var_name);
	char *temp;
	char **dirs;
	int len = 0, no_of_dirs = 1, i = 0;

	/**
 	* will count length of path from next char after equals sign to null char
 	* at the end of the string
 	*/
	while (path[len])
	{
		if (path[len] == '=')
		{
			path = path + len + 1;
			len = 0;
			/*path will point to string after equals sign*/
			continue;
		}
		if (path[len])
			no_of_dirs++;
		len++;
	}
	len++;
	temp = malloc(len * sizeof(*path));
	temp = _strcpy(temp, path);
	printf("%s\n", temp);
	dirs = malloc((no_of_dirs + 1) * sizeof(dirs));	
	split_string(temp, dirs, ":");
	while (dirs[i])
	{
		printf("%s\n", dirs[i]);
		i++;
	}

	return (0);
}
