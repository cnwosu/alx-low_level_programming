#include <stdio.h>
#include "main.h"

/**
 * main - print the output od argc (number of arguments)
 * @argc: keeps count of number of arguments
 * @argv: stores records of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*This command is used to Ignore argv*/
	printf("%d\n", argc - 1);

	return(0);
}
