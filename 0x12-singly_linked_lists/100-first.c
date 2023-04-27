# include "lists.h"

/**
 * print_message - void fuction that be executed before main
 */
void __attribute__((constructor)) print_message()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
