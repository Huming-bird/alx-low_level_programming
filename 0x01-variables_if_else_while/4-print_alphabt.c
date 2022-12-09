#include <stdio.h>

/**
 * main - start of program
 * Return: always true
 */

int main(void)

{
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i <= 26; i++)
	{
		if (i == 4 || i == 16)
			;
		else
			putchar((int) a);

	}
	return (0);
}
