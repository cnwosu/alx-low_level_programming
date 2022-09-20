#include "main.h"

/**
 *puts_half - prints half of a string,
 *
 *@str: param pointer printer
 */

void puts_half(char *str)
{
	int i, size, s;

	for (size = 0; str[size] != '\0'; size++)
	{
	}
	if ((size % 2) == 0)
		s = (size / 2);
	else
		s = (size + 1) / 2;

	for  (i = s; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
