#include "main.h"

/**
 *_strlen - funtion to return the string length
 *
 *@s: param to be passed in the function
 *
 *Return: The string length
 */

int _strlen(char *s)
{
	int strlength;

	for (strlength = 0; s[strlength] != '\0'; strlength++)
		;
	return (strlength);
}
