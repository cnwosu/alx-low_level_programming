#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 *
 * @s: The string to be passed to the function
 *
 * Return: 0 if s is = to the null terminator
 * and 1 if it is otherwise
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
