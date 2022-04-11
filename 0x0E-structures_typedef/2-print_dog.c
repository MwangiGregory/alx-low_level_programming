#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints members of a struct dog
 * @d: pointer to a struct of type dog
 */
void print_dog(struct dog *d)
{
	float age = d->age;
	char *name = d->name;
	char *owner = d->owner;

	if (d == NULL)
		return;
	if (*name == '\0')
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", name);
	if (age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", age);
	if (*owner == '\0')
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", owner);

}
