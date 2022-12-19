#include "main.h"
#include <stdio.h>

/**
 * swap_int - start of prog
 * @a: param 1
 * @b: param 2
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	*a = (long) b;
	*b = (long) a;
}
