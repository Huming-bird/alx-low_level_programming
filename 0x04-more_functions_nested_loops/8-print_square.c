#include <stdio.h>
#include "main.h"

/**
 * print_square - start
 * @size: parametr
 * Return: void
 */

void print_square(int size)
{
	int i, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (n = 1; n <= size; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
