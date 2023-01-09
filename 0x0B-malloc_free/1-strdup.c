#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - start of prog
 * @str: param1
 * Return: char
 */

char *_strdup(char *str)
{
	char *a;
	int b, c = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[b] != '\0')
	{
		b++;
	}
	a = malloc(sizeof(char) * (b + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0; str[c] != '\0'; c++)
	{
		a[c] = str[c];
	}
	return (a);
}
