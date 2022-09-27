#include "main.h"
#include <stddef.h>

/**
 *_strchr - locates a character in a string
 *
 *@s: string s to be searched
 *
 *@c: character to be checked
 *
 *Return: returns pointer to first
 *occurence of s and return null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
