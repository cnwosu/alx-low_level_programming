#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: The given number
 * Return: (-1) if n is lower than 0, return 1
 * if n is equal to 1 and return the factorial if otherwise
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
