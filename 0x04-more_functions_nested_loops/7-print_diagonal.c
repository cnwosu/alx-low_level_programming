#include "main.h"

/**
 *print_diagonal - Draws a line diagonally on the terminal
 *
 *@n: Numbers of time that that it should print the line
 */

void print_diagonal(int n)
{
	int i;
	int shift;

	for (i = 0; i < n; i++)
	{
		for (shift = 0; shift < i; shift++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
