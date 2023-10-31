#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this function gets the input
 * and add them together
 * @s1: input 1
 * @s2: input 2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, j, k;
	char *str;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (j = 0; j < len1; j++)
	{
		str[j] = s1[j];
	}
	for (k = 0; k <= len2; k++)
	{
		str[j] = s2[k];
		j++;
	}
	return (str);
}
