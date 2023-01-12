#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of imtegers
 * @min: min range
 * @max: maxi range
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
