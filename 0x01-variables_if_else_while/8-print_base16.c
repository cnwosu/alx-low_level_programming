#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Description: prints all the numbers of base 16 in lowercase
 *
 *Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	if (num < 10)
	{
		putchar('0' + num);
	}
	else
	{
		putchar(87 + num);
	}
	putchar('\n');
	return (0);
}
