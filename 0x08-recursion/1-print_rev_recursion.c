#include "main.h"

/**
 * _print_rev_recursion - start of prog
 * @s: param1
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
