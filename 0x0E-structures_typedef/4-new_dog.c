# include "dog.h"
# include <stdlib.h>
/**
 * _strlen - funct
 * @s: input
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
 * new_dog - funct
 * @name: member variable
 * @age: member variable
 * @owner: member variable
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;

	dog_t *dog = NULL;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	len1 = _strlen(name) + 1;
	len2 = _strlen(owner) + 1;
	dog->name = malloc(len1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(len2);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	dog->age = age;
	for (i = 0; owner[i] != '\0'; i++)
	{
		dog->owner[i] = owner[i];
	}
	dog->owner[i] = '\0';
	return (dog);
}
