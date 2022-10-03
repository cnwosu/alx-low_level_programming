#include "main.h"

/**
 *_strncat - concatenates two strings
 *
 *@src: string source pointer param
 *@dest: string destination param
 *@n: length of the int
 *
 *Return: pointer to the result of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && c < n; c++)
	{
		dest[i + c] = src[c];
	}
	dest[i + c] = '\0';
	return (dest);
}
