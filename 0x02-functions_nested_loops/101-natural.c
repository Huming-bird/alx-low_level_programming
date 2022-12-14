#include <stdio.h>

/**
 * main - start
 * 
 * Return: 0/
 */

void natural(void)
{
	/**
	 * natural - start
	 */
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
