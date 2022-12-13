#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - start of prog
 * Return: always int
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
