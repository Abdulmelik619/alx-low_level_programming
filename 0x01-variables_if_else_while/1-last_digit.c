#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
{
	printf("Last digit of %i is %i and is greater than 5\n",n,n%10);
}
else if (l == 0)
{
	printf("Last digit of %i is %i and is 0\n",n,n%10);
}
else 
{
	printf("Last digit of %i is %i and is lesss than 6 and not 0\n",n,n%10);
}
return (0);
}

