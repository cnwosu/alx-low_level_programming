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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
		}
	}
	return (NULL);
}
