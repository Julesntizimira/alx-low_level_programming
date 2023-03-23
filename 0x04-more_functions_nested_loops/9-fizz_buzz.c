#include "main.h"
#include <stdio.h>

/**
 * main - printing the upper
 *
 * Return: 0 always success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) != 0 && (i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%d", i);
		}
		printf(" ");
		if (i == 100)
			break;
	}
	printf("\n");

	return (0);
}
