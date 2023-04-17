# include "dog.h"
/**
 * free_dog - funct
 * @d: input
 */

void free_dog(dog_t *d)
{
	free(d->name);
	d->name = NULL;
	free(d->owner);
	d->owner = NULL;
	free(d);
}
