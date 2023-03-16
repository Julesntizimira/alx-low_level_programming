#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int     main(void)
{
int i = (sizeof(char));
int j = (sizeof(int));
int y = (sizeof(long int));
int z = (sizeof(long long int));
int k = (sizeof(float));

printf("Size of a char: %i byte(s)\n", i);
printf("Size of an int: %i byte(s)\n", j);
printf("Size of a long int: %i byte(s)\n", y);
printf("Size of a long long int: %i byte(s)\n", z);
printf("Size of a float: %i byte(s)\n", k);
return (0);
}
