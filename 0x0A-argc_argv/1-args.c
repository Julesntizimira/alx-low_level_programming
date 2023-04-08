# include <stdio.h>
/**
 * main - starting point
 * @argc: argument to main
 * @argv: array of pointers to the string arguments
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
