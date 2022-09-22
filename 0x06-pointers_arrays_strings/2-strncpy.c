#include "main.h"

/**
 *_strncpy - function to copy string
 *@dest: param pointer
 *@src: param pointer
 *@n: max length of characters copied
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
