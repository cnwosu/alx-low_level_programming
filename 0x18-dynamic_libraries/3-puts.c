#include "main.h"

/**
 *_puts - function that prints a string, followed by a new line
 *
 *@str: param pointing to the array to be printed
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
