#include "main.h"
#include <stdio.h>

/**
 * main - start of prog
 * @*n: pointer 1
 * Return: int type
 */
void reset_to_98(int *n)
{
	int p;
	n = &n;
	*n = 98;
}
