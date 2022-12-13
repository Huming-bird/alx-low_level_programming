#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - start of program
 * Return: type int
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar(i);
		_putchar(i);
		_putchar(i);
		_putchar(i);
		_putchar(i);
		_putchar(i);
		_putchar(i);
		_putchar(i);
		_putchar(i);
	}
	_putchar('\n');
}
