#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copy a string given as a parameter
 *
 * @str: string to be copied
 *
 * Return: NULL if the parameter is NULL
 * else return the pointer
 */

char *_strdup(char *str)
{
	char *can;
	int count = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count] != 0)
	{
		count++;
	}

	can = malloc((sizeof(char) * count) + 1);

	if (can == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		can[i] = str[i];
	}
	return (can);
}
