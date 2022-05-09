#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * main - PPID
 * Return: Always 0
 */
int main(void)
{
	pid_t parent;
	pid_t my_id;

	my_id = getpid();
	parent = getppid();

	printf("my_id=>%u\n", my_id);
	printf("parentId=>%u\n", parent);
	return (0);
}
