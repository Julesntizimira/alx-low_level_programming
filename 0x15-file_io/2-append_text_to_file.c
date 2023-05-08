# include "main.h"
/**
 * _strlen - funct
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
 * append_text_to_file - function
 * @filename: input
 * @text_content: input
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
		if (fd == -1)
			return (-1);
	if (text_content == NULL)
		return (1);
	i = write(fd, text_content, _strlen(text_content));
	if (i == -1)
		return (-1);
	return (1);
}
