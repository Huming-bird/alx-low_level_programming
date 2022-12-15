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

	for (i = 0; i <= size; i++)
	{
		for (n = 0; n <= size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
