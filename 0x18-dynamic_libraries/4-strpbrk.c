#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *
 *@s: Array to be searched
 *
 *@accept: Array used in searching
 *
 *Return: s the rest of the array
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
																				}
		i++;
	}

	return (0);
}
