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

	for (i = 1; i <= size; i++)
	{
		for (n = 1; n <= size; n++)
		{
			putchar(35);
		}
		putchar('\n');
	}
}

int main (void)
{
print_square(3);
return (0);
}
