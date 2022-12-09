#include <stdio.h>
/**
 * main - start
 * Return: int
 */

int main(void)

{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
	for (b = a + 1; b <= '9'; b++)
	{
	for (c = b + 1; c <= '9'; c++)
	{
	if (a != b)
	{
	putchar(a);
	putchar(b);
	putchar(c);
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
