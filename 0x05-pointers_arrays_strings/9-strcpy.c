#include "main.h"
#include <stdio.h>

/**
 * _strcpy - start
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
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
