#include <stdio.h>

/**
 * natural - start
 * Return: 0/
 */

void natural(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
}

