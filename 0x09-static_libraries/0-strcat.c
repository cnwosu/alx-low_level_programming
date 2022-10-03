#include "main.h"

/**
 *_strcat - concatenates to strings
 *
 *@dest: pointer param
 *@src: pointer param
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; c++, i++)
	{
		dest[i] = src[c];
	}
	dest[i] = '\0';
	return (dest);
}
