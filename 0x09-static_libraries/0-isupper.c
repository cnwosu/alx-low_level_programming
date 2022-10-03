#include "main.h"

/**
 *_isupper - Function prototype
 *
 *Description: Checks for uppercase character
 *
 *Return: returns (1) if c is upper case, otherwise returns (0)
 *
 *@c: A param integer
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
