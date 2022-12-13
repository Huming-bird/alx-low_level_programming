#include "main.h"
#include <unistd.h>

/** 
 * putchar: prints to output
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

