#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - start
 * @n: num
 * Return: tyl int
 *
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	return (a);
}
