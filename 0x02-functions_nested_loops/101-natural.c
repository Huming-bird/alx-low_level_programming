#include <stdio.h>

/**
 * natural - start
 * main - main program
 * Return: 0/
 */

void natural(void)
{
	int n, sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
}

int main(void)
{
	natural();
	return (0);
}

