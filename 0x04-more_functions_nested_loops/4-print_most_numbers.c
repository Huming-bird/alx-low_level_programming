#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - start
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
