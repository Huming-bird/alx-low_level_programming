#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory
 * @s: param to fill
 * @b: param to copy
 * @n: number of times
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocate memory to array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
