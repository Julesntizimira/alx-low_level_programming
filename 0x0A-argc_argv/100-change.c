# include <stdio.h>
# include <stdlib.h>
/**
 * divd - starting point
 * @n: argument
 * Return: 0 always success
 */

int divd(int n)
{
	int i;

	i = n / 25;
	if ((n % 25) != 0)
	{
		n = n % 25;
		i += n / 10;
		if ((n % 10) != 0)
		{
			n = n % 10;
			i += n / 5;
			if ((n % 5) != 0)
			{
				n = n % 5;
				i += n / 2;
				if ((n % 2) != 0)
				{
					n = n % 2;
					i += n / 1;
				}
			}
		}
	}
	return (i);
}

/**
 * main - starting point
 * @argc: argument to main
 * @argv: array of pointers to the string arguments
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i, j, z;

	j = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			z = atoi(argv[i]);
			if (z < 0)
			{
				printf("%d\n", j);
			}
			else
			{
				printf("%d\n", divd(z));
			}
		}
	}
	return (0);
}
