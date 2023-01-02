#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - start of prog
 * @a: param 1
 * @size: param 2
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum_1, sum_2, b;

	sum_1 = 0;
	sum_2 = 0;

	for (b = 0; b < size; b++)
	{
		sum_1 = sum_1 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		sum_2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
