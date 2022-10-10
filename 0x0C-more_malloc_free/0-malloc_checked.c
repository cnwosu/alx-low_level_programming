#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates fixed memory
 *
 * @b: size of memory
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
