#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: pointer to first array
 *
 *@accept: second array param
 *
 *Return: return number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int numberofbyte = 0;
	int length1;
	int length2;
	int i, j;

	for (length1 = 0; s[length1] != '\0'; length1++)
	{
		length1++;
	}
	for (length2 = 0; accept[length2] != '\0'; length2++)
	{
		length2++;
	}
	for (i = 0; i < length1; i++)
	{
		for (j = 0; j < length2; j++)
		{
			if (s[i] != 32)
			{
				if (s[i] == accept[j])
				{
					numberofbyte++;
				}
			}
			else
				return (numberofbyte);
		}
	}
	return (numberofbyte);
}
