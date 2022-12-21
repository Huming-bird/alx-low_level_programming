#include "main.h"

/**
 * string_toupper - start
 * @p: pointer
 * Return: char
 */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a] != '\0')
	{
		if (p[a] >= 'a' && p[a] <= 'z')
		{
			p[a] = p[a] - 32;
			a++;
		}
	}
		return (p);
}
