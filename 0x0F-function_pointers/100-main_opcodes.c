#include <stdio.h>
#include <stdlib.h>
/**
 * main - funct
 * @argv: input
 * @argc: input
 *
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i;
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *main_fn_bytes = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", main_fn_bytes[i]);
	}
	printf("\n");

	return (0);
}

