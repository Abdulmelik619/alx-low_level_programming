#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 *
 * Description: using the main function
 * Return: 0 onn success
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	do{
		putchar(c);
		c++;
	} while(c <= 'z');
	do{
		putchar(d); 
		d++;
	}while (d <= 'Z')
	
	putchar('\n');
	return (0);
}

