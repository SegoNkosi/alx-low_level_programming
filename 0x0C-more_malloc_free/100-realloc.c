#include "main.h"
#include <stdlib.h>

/**
 * realloc - function that reallocates a memory block using malloc and free
 * @ptr: former pointer to old memory
 * @old_size: old size allocated by malloc
 * @new_size: new size allocated by realloc function
 *
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t k, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (k = 0; k < max; k++)
		p[k] = oldp[k];
	free(ptr);
	return (p);
}
