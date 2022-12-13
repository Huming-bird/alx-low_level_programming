#include <stdio.h>

/**
 * main - start of prog
 * Return: always int
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}	
