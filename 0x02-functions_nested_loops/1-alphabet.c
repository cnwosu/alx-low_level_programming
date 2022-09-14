#include "main.h"

/**
 *print_alphabet - entry point
 *
 * description: prints lower case alphabets
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
