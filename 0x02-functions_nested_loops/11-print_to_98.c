#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - start
 * @n: param
 * Return: 0
 */

void print_to_98(int n)
{
	int p;

	if (n < 98)
	{
		p = n;
		while (p <= 98)
		{
			if (p != 98)
			{
			printf("%d, ", p);
			}
			else if (p == 98)
			{
				printf("%d", p);
			}
			p++;
		}
	}
	else
	{
		p = n;
		while (p >= 98)
		{
			if (p != 98)
			{
			printf("%d, ", p);
		}
			if (p == 98)
			{
				printf("%d", p);
			}
			p--;
		}
	}
	printf("\n");
}

