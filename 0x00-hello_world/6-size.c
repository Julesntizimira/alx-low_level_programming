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

printf("Size of a char: %i byte(S)\n", i);
printf("Size of an int: %i byte(S)\n", j);
printf("Size of a long int: %i byte(S)\n", y);
printf("Size of a long long int: %i byte(S)\n", z);
printf("Size of a float: %i byte(S)\n", k);
return (0);
}
