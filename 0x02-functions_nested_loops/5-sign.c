#include <stdio.h>
#include "main.h"

/**
 * print_sign - start of prog
 * @n: number
 *
 * Return: type int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
