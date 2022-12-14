#include <stdio.h>

/**
 * main - start
 * Return: 0
 */

int main(void)
{
	int c;
	unsigned long first = 1, second = 2, next, sum = 0;

	for (c = 1;  c <= 33; ++c)
	{
		if (first < 4000000 && (first % 2) == 0)
		{
			sum = sum + first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%ld\n", sum);
	return (0);
}
