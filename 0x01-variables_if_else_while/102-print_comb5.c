#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; a <= 99; b++)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(' ');
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);

			if (a == 98 && b == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
