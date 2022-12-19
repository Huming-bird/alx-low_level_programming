#include "main.h"
#include <stdio.h>

/**
 * print_rev - start
 * @s: param 1
 * Return: void
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (o = a; a > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
