#include "main.h"

/**
 *swap_int - function to swap the value of the parameters
 *
 *@a: param 1
 *@b: param 2
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
