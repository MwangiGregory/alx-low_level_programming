#include <stdlib.h>
#include <stdio.h>

/**
 * main - print main's arguments
 *
 * Return: 1 if av is NUll, 0 otherwise
 */
int main(int ac, char **av)
{
	char **current_arg = av;
	int i = 0;
	(void)ac;
	
	if (!av)
		exit(1);
	while(current_arg[i])
	{
		printf("%s\n", current_arg[i]);
		i++;
	}
	return (0);
}
