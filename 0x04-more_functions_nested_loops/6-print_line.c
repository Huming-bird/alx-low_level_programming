#include <stdio.h>
#include "main.h"

/**
 * print_line - start
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= 5; n++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
