#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Creates an array
 * @size: Tell the size of the array
 * @c: the character that each value of array must hold
 * Return: Return th buffer which is the
 * value at the memory allocated
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int positioncount;

	if (size == 0)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
	{
		return (NULL);
	}
	for (positioncount = 0; positioncount < size; positioncount++)
	{
		buffer[positioncount] = c;
	}
	return (buffer);
}
