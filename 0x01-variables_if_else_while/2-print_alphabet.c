#include <stdio.h>

/*
 * main - Prints the alphabetic
 *
 * Description: using the main function
 * this program prints "Programming"
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}

