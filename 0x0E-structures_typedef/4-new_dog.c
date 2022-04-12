#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: If successful pointer to new_dog, NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(*new_dog));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	init_dog(new_dog, name, age, owner);
	return (new_dog);
}
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct of type dog
 * @name: pointer to string
 * @age: age of dog
 * @owner: pointer to a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL)
		d->name = "(nil)";
	else
		d->name = name;
	d->age = age;
	if (owner == NULL)
		d->owner = "(nil)";
	else
		d->owner = owner;
}
