#include "main.h"

/**
 * reverse_array - start
 * @a: param 1
 * @n: param 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c, b;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
