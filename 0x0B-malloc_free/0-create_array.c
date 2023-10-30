#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates an array
 * of size size and assign char c
 * @size: array size
 * @c: assigned char
 * Description: creates array of size and char c
 * Return: pointer to array, NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;


	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}

