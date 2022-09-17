#include "main.h"

/**
 *print_numbers - Declaration of fuction
 *
 *Description: prints the numbers from 0-9 followed by a new line
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar((number % 10) + '0');
	}
	_putchar('\n');
}
