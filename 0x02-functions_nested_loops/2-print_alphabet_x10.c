#include "main.h"

/**
 *print_alphabet_x10 - entry function of this code
 *
 *description: prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int ten_x = 0;
	char alpha;

	while (ten_x < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);

		}

		ten_x++;
		_putchar('\n');
	}
}
