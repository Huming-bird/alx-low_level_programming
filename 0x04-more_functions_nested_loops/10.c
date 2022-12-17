#include <stdio.h>
#include "main.h"

/**
 * print_trianglr - start
 * @size: parametr
 * Return: void
 */

void print_triangle(int size)
{
	int i, n;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (n = i; n < size; n++)
			{
				putchar(' ');
			}
			for (n = 1; n <= i; n++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}

int main (void)

{
	print_triangle(10);
	print_triangle(0);
	print_triangle(1);
	return (0);
}
