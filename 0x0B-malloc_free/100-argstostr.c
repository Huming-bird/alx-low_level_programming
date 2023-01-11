#include "main.h"
#include <stdlib.h>

/**
 * argstostr - start of prog
 * @ac: param1
 * @av: param2
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			a++;
		}
	}
	d += ac;

	s =(void *) malloc(sizeof(char) * d + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			s[c] = av[a][b];
			c++;
		}
		if (s[c] == '\0')
		{
			s[c++] = '\n';
		}
	}
	return (s);
}
