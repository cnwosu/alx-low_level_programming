#include "main.h"

/**
 **_strcpy - copies the string pointed to by src
 *
 *@dest: pointer param
 *
 *@src: another pointer param
 *
 *Return: Dest
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (d);
}
