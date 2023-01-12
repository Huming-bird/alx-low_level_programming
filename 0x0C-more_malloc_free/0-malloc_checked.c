#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memeory
 * @b: param1
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
