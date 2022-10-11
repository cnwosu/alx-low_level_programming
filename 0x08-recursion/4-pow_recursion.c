#include "main.h"

/**
 * _pow_recursion - calulate the value of x raised to the power of y
 *
 * @x: value of x
 * @y: value of y
 *
 * Return: return the result of the power when y is less than
 * 0 it will return -1 when equal to 0 return 1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
