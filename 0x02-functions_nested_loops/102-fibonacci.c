#include <stdio.h>

/**
 * main - start
 * Return: 0
 */

int main(void)
{
	int sum, n;
	
	n = 0;
	sum = 1;
	while (n < 50)
	{
		if (n == 0)
		{
			sum = sum + 1;
		}
		else
		{
			sum += sum;
		}
		putchar(sum + '0');
		putchar('\n');
		n++;
	}
	return (0);
}	
