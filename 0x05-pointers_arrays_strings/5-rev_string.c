#include "main.h"

/**
 *rev_string - function to reverse string
 *
 *@s: param pointer
 */

void rev_string(char *s)
{
	int i = 0, size = 0;
	char temp;

	while (s[i++])
		size++;

	for (i = size - 1; i >= size / 2; i--)
	{
		temp = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = temp;
	}
}
