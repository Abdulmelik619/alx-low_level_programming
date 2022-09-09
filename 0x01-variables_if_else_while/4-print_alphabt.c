#include <stdio.h>

/**
 * main - Prints the alphabet except the letters q and e.
 *
 * Description: using the main function
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}	
	putchar('\n');
	return (0);	
}

