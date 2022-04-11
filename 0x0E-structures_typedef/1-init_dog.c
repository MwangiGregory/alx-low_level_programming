#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct of type dog
 * @name: pointer to string
 * @age: age of dog
 * @owner: pointer to a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
