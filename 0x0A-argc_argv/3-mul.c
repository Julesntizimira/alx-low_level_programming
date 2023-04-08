# include <stdio.h>
# include <stdlib.h>
/**
 * main - starting point
 * @argc: argument to main
 * @argv: array of pointers to the string arguments
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int i, mult;

	mult = 1;
	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mult *= atoi(argv[i]);
	}
	printf("%d\n", mult);

	return (0);
}
