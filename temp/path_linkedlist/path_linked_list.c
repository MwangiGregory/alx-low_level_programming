#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern char **environ;
/**
 * main - entry point
 * 
 * Return: Always zero
 */
int main(void)
{
	list_t *path_list = NULL;
	char *var_name = "PATH";
	char *path = _getenv(var_name);
	char *temp;
	char **dirs;
	int len, no_of_dirs = 1, i = 0;

	/**
 	* will count length of the path string from next char after the equals 
 	* character to the end of the string, including the null character.
 	*/
	for (len = 0; path[len]; len++)
	{
		if (path[len] == '=')
		{
			/*make path point to the string after the equals sign*/
			path = path + len + 1;
			len = 0;
			continue;
		}
		/*counts the number of directories*/
		if (path[len] == ':')
			no_of_dirs++;
	}
	len++;/*count the null char at end of the string*/

	/*
 	 * temporary space to store a duplicate of path string.
 	 * This is to avoid modifying the actual Variable PATH
	 */
	temp = malloc(len * sizeof(*path));
	temp = _strcpy(temp, path);
	/*array of pointers to the strings of directories stored in temp*/
	printf("no_of_dirs -> %d\n", no_of_dirs);
	/*create space to store pointer to the directories*/
	dirs = malloc((no_of_dirs + 1) * sizeof(char *));	
	split_string(temp, dirs, ":");
	/*create a linked list of directories*/
	for (i = 0; dirs[i]; i++)
		path_list = add_node(&path_list, dirs[i]);

	print_list(path_list);
	free_list(path_list);

	/*free memory where strings of directories are stored*/
	for (i = 0; dirs[i]; i++)
/*		free(dirs[i]);*/

	free(dirs);
	return (0);
}

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
/**
 * _strcpy - copies string pointer to by src into dest
 * @dest: pointer to a string buffer
 * @src: pointer to a string
 * Return: NULL if failed, pointer to string dest if succesful
 */
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
/**
 * split_string - splits a string into token/ words
 * and stores the pointers to the tokens in an array
 * @line: pointer to a string
 * @strings: array of pointers
 * @delim: pointer to delimiting character/string.
 */
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
