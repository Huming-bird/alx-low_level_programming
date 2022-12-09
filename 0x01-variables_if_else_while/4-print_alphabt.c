#include <stdio.h>

/**
 * main - start of program
 * Return: always true
 */

int main(void)

{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 101 || i == 113)
			;
		else
			putchar(i);

	}
	putchar('\n');
	return (0);
}
