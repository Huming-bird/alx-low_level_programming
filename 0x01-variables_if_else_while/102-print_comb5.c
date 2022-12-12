#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int a, b;

<<<<<<< HEAD
	for (a = '0'; a <= '9'; a++)
=======
	for (a = 0; a <= 98; a++)
>>>>>>> d230e3e1916eeb5d17260ed93ec195fb6b96831f
	{
		for (b = a + 1; b <= 99; b++)
		{
<<<<<<< HEAD
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
=======
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
				continue;

			putchar(',');
			putchar(' ');
>>>>>>> d230e3e1916eeb5d17260ed93ec195fb6b96831f
		}
	}

	putchar('\n');

	return (0);
}
