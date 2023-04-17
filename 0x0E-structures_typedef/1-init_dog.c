# include "dog.h"
/**
 * init_dog - funct
 * @d: structure
 * @name: member variable
 * @age: member variable
 * @owner: member variable
 * Return: void pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
