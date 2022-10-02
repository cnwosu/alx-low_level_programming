#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- multiplies arguments
 *
 * @argc: param
 * @argv: param
 *
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
