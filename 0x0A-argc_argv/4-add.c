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
	int i, add;

	add = 0;
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
