#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - start
 * @n: param
 * Return: 0
 */

void print_to_98(int n)
{
	int p;

	if (n < 98)
	{
		p = (int) n;
		while (p <= 98)
		{
			_putchar(p);
			if (p == 98)
				;
			_putchar(',');
			_putchar(' ');
			p++;
		}
	}
	else
	{
		p = (int) n;
		while (p >= 98)
		{
			_putchar(p);
			if (p == 98)
				;
			_putchar(',');
			_putchar(' ');
			p--;
		}
	}
	_putchar('\n');
}

