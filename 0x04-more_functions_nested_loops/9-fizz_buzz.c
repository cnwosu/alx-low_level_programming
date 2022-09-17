#include <stdio.h>

/**
 *main -Function to print number from 0 - 100
 *
 *Return: return Always (0) sucess
 */

int main(void)
{
	int numb = 1;
	char FB[] = "FizzBuzz";
	char F[] = "Fizz";
	char B[] = "Buzz";

	while (numb < 101)
	{
		if (numb % 3 == 0 && numb % 5 == 0)
		{
			printf("%s", FB);
		}
		else if (numb % 3 == 0)
		{
			printf("%s", F);
		}
		else if (numb % 5 == 0)
		{
			printf("%s", B);
		}
		else
		{
			printf("%d", numb);
		}

		if (numb != 100)
			printf(" ");
		numb++;
	}

	printf("\n");
	return (0);
}
