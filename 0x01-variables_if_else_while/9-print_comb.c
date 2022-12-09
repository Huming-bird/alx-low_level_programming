#include <stdio.h>

/**
 * main - start of prog
 * Return: always int
 */

int main(void)

{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
			break;
		}

	}
	putchar('\n');
	return (0);


}
