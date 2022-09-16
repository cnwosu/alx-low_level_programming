#include "main.h"

/**
 *_isdigit - where the function starts
 *
 *Desccription: It checks for digits
 *
 *Return: return (1) if c is a digit otherwise return (0)
 *
 *@c: The parameter c that it is required
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
