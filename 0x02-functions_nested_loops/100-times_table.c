#include <stdio.h>
#include "main.h"

/**
 * print_times_table - start
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
		k = (j * i);
		if (j == 0)
		{
			_putchar(k + '0');
		}
		if (k <= n && j != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
		else if (k >= n)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
	}
		_putchar('\n');
	}
}

