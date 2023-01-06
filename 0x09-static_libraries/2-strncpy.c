#include "main.h"

/**
 * _strncpy - start
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
