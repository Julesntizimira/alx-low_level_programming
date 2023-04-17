# include "dog.h"
# include <stdlib.h>
/**
 * init_dog - funct
 * @d: structure
 * @name: member variable
 * @age: member variable
 * @owner: member variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
