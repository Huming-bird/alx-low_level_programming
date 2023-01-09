#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - start of prog
 * @width: input width
 * @height: input height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **) malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = (int *)  malloc(sizeof(int) * width);
		if (a[b] == NULL)
		{
			free(a);
			for (b = 0; b <= 0; b++)
			{
				free(a[b]);
			}
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			a[b][c] = 0;
		}
	}
	return (a);
}
