#include <stdio.h>
#include "main.h"

/**
 * main - start of prog
 * @argc: param 1
 * @argv: param2
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
