#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat the two strings passed
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Return the pointer to the memory that store the value
 * else return NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j;
	int k = 0;
	int c1 = 0;
	int c2 = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";
	while (s1[c1] != '\0')
	{
		c1++;
	}
	while (s2[c2] != '\0')
	{
		c2++;
	}
	j = c1 + c2;
	ptr = malloc((sizeof(char)) * j + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < c1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (c1 < j)
	{
		ptr[c1] = s2[k];
		k++;
		c1++;
	}
	return (ptr);
}
