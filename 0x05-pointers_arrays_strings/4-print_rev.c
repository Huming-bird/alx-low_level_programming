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
	for (b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
