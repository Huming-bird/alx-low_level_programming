#include "main.h"
#include <stdio.h>

/**
 * strcpy - start
 * @dest: param 1
 * @src: param 2
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;
	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; a < b ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
