#include <stdio.h>
#include "math.h"

/**
 * _abs - start of prog
 * @int: int typ parameter
 *
 * Return: type int
 */

int _abs(int)
{
	int n;

	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}

	return (0);
}
