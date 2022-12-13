#include <stdio.h>
#include "main.h"

/**
 * times_table - start
 * Return: 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		k = (j * i);
		if (j == 0)
		{
			_putchar(k + '0');
		}
		if (k < 10 && j != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
		else if (k >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
	}
	_putchar('\n');
}
