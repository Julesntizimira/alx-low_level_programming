# include "dog.h"
# include <stdlib.h>
/**
 * free_dog - funct
 * @d: input
 */

void free_dog(dog_t *d)
{
	if (d->owner != NULL)
		free(d->owner);
	if (d->name != NULL)
		free(d->name);
	if (d != NULL)
		free(d);
}
