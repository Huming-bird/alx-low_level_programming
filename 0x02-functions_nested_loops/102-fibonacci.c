#include <stdio.h>

/**
 * main - start
 * Return: 0
 */

int main(void)
{
	int c;
	unsigned long first = 0, second = 1, sum;

	for (c = 0;  c < 50; c++)
	{
		sum = first + second;
		if (c < 49)
		{
			printf("%ld, ", sum);
		}
		first = second;
		second = sum;

		if (c == 49)
		{
			printf("%ld\n", sum);
		}
		
	}
	return (0);
}
