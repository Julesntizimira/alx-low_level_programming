# ifndef DOG_H
# define DOG_H
/**
 * struct dog - structure
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: this is a struct for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
# endif
