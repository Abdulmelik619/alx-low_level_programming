#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts_recursion(char *s)
{
	printf(s);
	printf('\n');
}
