#include "main.h"
#include <stdio.h>

/**
 * more_numbers - start
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = '0'; i <= '14'; i++)
	{
		i *= 10;
		_putchar(i);
	}
	_putchar('\n');
}
