# include "main.h"
# include <stdlib.h>
/**
 * read_textfile - function
 * @filename: input
 * @letters: input
 * Return: i
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t j = 0, k = 0, i = 0;
	ssize_t fd = 0;
	char *ptr = NULL;

	if (filename == NULL)
		return (0);
	ptr = malloc(letters * sizeof(char));
	if (ptr == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	k = letters;
	if (fd == -1)
	{
		free(ptr);
		return (0);
	}
	i = read(fd, ptr, letters);
	if (i == -1 || i != k)
	{
		close(fd);
		free(ptr);
		return (0);
	}
	j = write(STDOUT_FILENO, ptr, i);
	if (j == -1 || j != k)
	{
		close(fd);
		free(ptr);
		return (0);
	}
	close(fd);
	free(ptr);
	return (j);
}
