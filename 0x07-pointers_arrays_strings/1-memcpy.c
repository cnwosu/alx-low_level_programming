#include "main.h"
#include <stddef.h>

/**
 *_memcpy - copies one memory address to another
 *@dest: destination memory address
 *@src: source memory address
 *@n: number of bytes to copy
 *
 *Return: A pointer to the destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (dest == NULL)
			return (NULL);
		dest[i] = src[i];
	}
	return (dest);
}
