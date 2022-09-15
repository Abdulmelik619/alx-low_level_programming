#include "main.h"

/**
*_isupper - return 1 if c i uppercase
*@c: the character
*Return: 1 whehter its 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c<='Z'))
	{
		return (1);
	}
	
	return (0);
}
