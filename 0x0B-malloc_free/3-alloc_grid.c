# include <stdio.h>
# include "main.h"
# include <stdlib.h>
/**
 * alloc_grid - funct
 * @height: input
 * @width: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;


	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}



	return (arr);

}
