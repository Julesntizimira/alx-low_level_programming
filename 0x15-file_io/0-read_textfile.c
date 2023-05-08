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

	ssize_t j = 0, i = 0, k = 0;
	ssize_t fd = 0;
	char *ptr = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	ptr = malloc(letters * sizeof(char));
	if (ptr == NULL)
		return (0);
	if (fd == -1)
		return (0);
	i = read(fd, ptr, letters);
	j = write(STDOUT_FILENO, ptr, letters);
	close(fd);
	free(ptr);
	if (i == -1 || j == -1)
		return (0);
	k = letters;
	if (i != k || j != k)
		return (0);
	return (i);
}
