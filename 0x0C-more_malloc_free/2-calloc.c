#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of bloc memory
 * @size: size of element
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		p[j] = 0;
	return (p);
}
