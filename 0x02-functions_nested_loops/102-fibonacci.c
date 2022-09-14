#include <stdio.h>

/**
 *main - Prints first 50 Fibonacci numbers, starting with 1 and 2.
 *
 *Return: Always 0.
*/

int main(void)
{
	int plus;
	unsigned long fibo_1 = 0, fibo_2 = 1, sum;

	for (plus = 0; plus < 50; plus++)
	{
		sum = fibo_1 + fibo_2;
		printf("%lu", sum);

		fibo_1 = fibo_2;
		fibo_2 = sum;

		if (plus == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
