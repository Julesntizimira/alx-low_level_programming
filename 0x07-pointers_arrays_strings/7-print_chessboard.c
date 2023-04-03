# include "main.h"
# include <stddef.h>
/**
 * print_chessboard - memset funct
 * @a: input
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;
	char c;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			c = a[i][j];
			_putchar(c);
		}
		_putchar('\n');
	}
}
