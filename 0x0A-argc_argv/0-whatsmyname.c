#include <stdio.h>
#include "main.h"

/** main - start of prog
 * @argc: param1
 * @argv: param2
 * Return: int
 */

int main((int argc __attribute__((unused)), char *argv[]))
{
	printf("%s\n", *argv);
	return (0);
}
