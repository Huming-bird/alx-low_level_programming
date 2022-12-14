#include "main.h"

/**
 * _sqrt_recursion - start of prog
 * @i: param
 * @n: param1
 * Return: int
 */

int actual_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - start of prog
 * @n: param1
 * @i: param2
 * Return: int
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, (i + 1)));
}
