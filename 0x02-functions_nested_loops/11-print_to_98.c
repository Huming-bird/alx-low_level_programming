#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - start
 * @n: param
 * Return: 0
 */

int print_to_98(int n)
{
	if (n < 98)
	{
		p = n;
		while (p <= 98)
		{
			_putchar(p);
			_putchar(',');
			_putchar(' ');
			p++;
		}
	}
	else
	{
		p = n;
		while (p >= 98)
		{
			_putchar(p);
			_putchar(',');
			_putchar(' ');
			p--;
		}
	}
	_putchar('\n');
	return (0);
}

