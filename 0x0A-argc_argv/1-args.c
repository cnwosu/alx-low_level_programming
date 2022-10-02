#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	(void) argv; /*This command is used to Ignore argv*/
	printf("%d\n", argc - 1);

	return(0);
}
