#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates random valid passwords for crackme
 *
 *@[]: random
 *
 *Return: passwords
 */

int main(void)
{
	int ra = 0;
	int i = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		ra = rand() % 128;
		if ((i + ra) > 2772)
			break;
		i = i + ra;
		printf("%c", ra);
	}
	printf("%c\n", (2772 - i));
	return (0);
}
