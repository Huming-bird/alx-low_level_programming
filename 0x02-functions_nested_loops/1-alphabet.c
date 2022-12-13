#include <stdio.h>
#include "main.h"

/**
 * main - start of prog
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
int main(void)
{
	print_alphabet();
	return (0);
}	
