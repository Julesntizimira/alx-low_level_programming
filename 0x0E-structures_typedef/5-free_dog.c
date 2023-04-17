# include "dog.h"
# include <stdlib.h>
/**
 * free_dog - funct
 * @d: input
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
