#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
 *
 * Description: using the main function
 * Return: 0 on success
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}

