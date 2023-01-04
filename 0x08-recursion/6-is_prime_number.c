#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number
 * @n: param1
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, (n-1)));
}

/**
 * actual_prime - start of pro
 * @n: param
 * @i: iterator
 * Return: int
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
