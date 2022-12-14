#include <stdio.h>

/**
 * main - start
 * Return: 0
 */

int main(void)
{
	int c;
	unsigned long a, b, sum;

	for (c = 0;  c < 50; c++)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;

		if (c == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}	
