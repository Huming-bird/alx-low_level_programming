#include "main.h"

/**
 * _strpbrk - satrt of prog
 * @s: param1
 * @accept: param2
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accpt[a])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
