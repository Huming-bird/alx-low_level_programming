#include "main.h"
#include <stdio.h>

/**
 * puts2 - start
 * @str: param1
 * Return: void
 */

void puts2(char *str)
{
	char *a = str;
	int b, d;

	b = 0;

	while (*a != '\0')
	{
		a++;
		b++;
	}
	for (d = 0 ; d <= b ; d++)
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
	}
}
