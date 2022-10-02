#include <stdio.h>
#include "main.h"

/**
 * main - prints out arguments recieved using argv
 *
 * @argc: param
 * @argv: second param
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
