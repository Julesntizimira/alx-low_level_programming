# include "dog.h"
# include <stdlib.h>
/**
 * new_dog - funct
 * @name: member variable
 * @age: member variable
 * @owner: member variable
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = NULL;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
