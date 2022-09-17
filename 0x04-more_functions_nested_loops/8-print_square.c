#include "main.h"

/**
 *print_square - print the square followed by a new line
 *
 *@size: The number of squres to be printed
 */

void print_square(int size)
{
	int count1;
	int count2;

	for (count1 = 0; count1 < size; count1++)
	{
		for (count2 = 0; count2 < size; count2++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
