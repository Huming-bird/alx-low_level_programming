#include <stdio.h>

/**
 * main - start of program
 * Return: always integer
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar("\n");
	return (0);
}