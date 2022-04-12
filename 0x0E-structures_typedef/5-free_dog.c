#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory previously dogs
 * @d: pointer to a struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->age);
	free(d->owner);
}
