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
	int i, j;
	char *v;
	unsigned int add;

	add = 0;
	if (argc <= 1)
	{
		printf("%d\n", add);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			v = argv[i];
			for (j = 0; v[j] != '\0'; j++)
			{
				if ((v[j] < 48) || (v[j] > 57))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
