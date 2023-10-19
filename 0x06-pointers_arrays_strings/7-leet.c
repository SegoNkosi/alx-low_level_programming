#include "main.h"

/**
  * leet - function that encodes a string into 1337number
  * @n: input
  * Return: value of n
 */

char *leet(char *n)
{

	int k, l;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (l = 0; l < 10; l++)
		{
			if (n[k] == s1[l])
			{
				n[k] = s2[l];
			}
		}
	}
	return (n);
}
