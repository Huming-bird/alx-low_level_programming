#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - start of prog
 * @size: size of array
 * @c: param 1
 * Return: pointer or null
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	s = (char *) malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		*(s + a) = c;
	}
	*(s + a) = '\0';
	return (s);
}
