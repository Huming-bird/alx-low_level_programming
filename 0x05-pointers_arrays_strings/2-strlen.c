# include "main.h"
#include <stdio.h>

/**
 * _strlen - start
 * @s: param 1
 * Return: int typr
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
