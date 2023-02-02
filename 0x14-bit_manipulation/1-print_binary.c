#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, start = 0;
	unsigned long int present;

	for (a = 63; a >= 0; a--)
	{
		present = n >> a;

		if (present & 1)
		{
			_putchar('1');
			start++;
		}
		else if (start)
			_putchar('0');
	}
	if (!start)
		_putchar('0');
}
