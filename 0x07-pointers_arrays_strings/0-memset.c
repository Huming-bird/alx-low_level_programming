#include "main.h"

/**
 * _memset - start of prog
 * @s: param1
 * @b: param2
 * n: param3
 * Return: char 
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
