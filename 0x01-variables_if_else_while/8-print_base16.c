#include <stdio.h>

/**
 * main - start of prog
 * Return: aalways int
 */

int main(void)

{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
