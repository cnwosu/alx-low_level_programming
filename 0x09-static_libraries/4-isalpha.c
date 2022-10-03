#include "main.h"

/**
 *_isalpha - Entry point
 *
 *Description: Check for Alphabetic Characters
 *
 *Return: return (1) if alphabet else return 0
 *
 *@c: The int to accept
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
