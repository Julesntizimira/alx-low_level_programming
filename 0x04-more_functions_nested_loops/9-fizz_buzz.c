#include "main.h"
#include <stdio.h>

/**
 * main - printing the upper
 *
 * Return: 0 always success
 */

void Fizz_Buzz(void);

int main(void)
{

	Fizz_Buzz();
	return (0);
}

/**
 * Fizz_Buzz - printing the upper
 */
void Fizz_Buzz(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz");
		}
		else if (((i % 3) != 0) && ((i % 5) != 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
			break;
		printf(" ");
	}
	printf("\n");
}
