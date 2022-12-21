#include "main.h"

/**
 * cap_string - start
 * @p: pointer
 * Return: char
 */

char *cap_string(char *p)
{
	int a = 0;

	while (p[a])
	{
		while (!(p[a] >= 'a' && p[a] <= 'z'))
		{
			a++;
		}
		if (p[a - 1] == ' ' || p[a - 1] == '\t' || p[a - 1] == '\n' ||
				p[a - 1] == ',' || p[a - 1] == ';' || p[a - 1] == '.' ||
				p[a - 1] == '!' || p[a - 1] == '"' || p[a - 1] == '?' ||
				p[a - 1] == '(' || p[a - 1] == ')' || p[a - 1] == '{' ||
				p[a - 1] == '}' || a == 0)
		{
			p[a] -= 32;
		}
		a++;
	}
	return (p);
}
