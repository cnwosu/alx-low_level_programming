#include "main.h"

/**
 *print_line - Draws a straight line in the terminal
 *
 *@n: numbers of time the character should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
