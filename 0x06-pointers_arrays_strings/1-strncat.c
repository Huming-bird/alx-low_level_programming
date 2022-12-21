#include <stdio.h>
#include "main.h"

/**
 * _strcat - start
 * @dest: param 1
 * @src: param2
 * @n: param 3
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[i] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
