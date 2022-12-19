#include "main.h"
#include <stdio.h>

/**
 * print_array - start
 * @a: param 1
 * @n: param 2
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n")
}
