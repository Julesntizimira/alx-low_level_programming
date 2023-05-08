# include "main.h"
# include <stdio.h>
/**
 * main - funct
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2];
	char buff[1024];
	int fc, fr, i, j, z, k = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fr = open(file_from, O_RDONLY);
	fc = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	chmod(file_to, 0664);
	z = read(fr, buff, 1024);
	if (fr == -1 || z < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	do {
		k = dprintf(fc, "%s", buff);
		if (fc == -1 || k < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	} while ((z = read(fr, buff, 1024) > 0));
	i = close(fr);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}
	j = close(fc);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(100);
	}
	return (0);
}
