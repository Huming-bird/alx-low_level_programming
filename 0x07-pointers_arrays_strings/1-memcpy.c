#include "main.h"

/**
 * _memcpy - start of prog
 * @dest: param1
 * @src: param2
 * @n: pparam3
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a, b;

	a = 0;
	b = n;
	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
