#include <stdio.h>

/**
 * main - start
 * Return: int
 */

int main(void)

{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b < '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = c + 1; d <= '9'; d++)
				{
					if (b != d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
