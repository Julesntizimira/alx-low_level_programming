# include "3-calc.h"
# include <stdio.h>
# include <stdlib.h>
/**
 * main - funct
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	char *s = NULL;
	char *v = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(v + 1) != '\0' || !(*v == '-' ||
			       	*v == '+' || *v == '/' ||
				*v == '*' || *v == '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if (((*(argv[2]) == '%') || (*(argv[2]) == '/')) && (*(argv[3]) == ('0')))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	s = argv[2];
	c = get_op_func(s)(a, b);

	printf("%d\n", c);
	return (0);
}
