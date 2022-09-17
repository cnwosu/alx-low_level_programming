#include "main.h"

/**
 *print_triangle - print a triangle using #
 *
 *@size: triangle size
 */

void print_triangle(int size)
{
	int row, hash, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
																					}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
