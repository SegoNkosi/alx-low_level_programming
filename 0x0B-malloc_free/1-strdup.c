#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string and return
 * to new memory space location
 * @str: innput char string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *newstr;
	int j, k = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	newstr = malloc(sizeof(char) * (j + 1));

	if (newstr == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		newstr[k] = str[k];

	return (newstr);
}

