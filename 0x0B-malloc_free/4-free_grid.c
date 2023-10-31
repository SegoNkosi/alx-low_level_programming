#include "main.h"
#include <stdlib.h>

/**
 * _realloc - this reallocates memory
 * @str: pointer to old memory
 * @old_size: old size allocated
 * @new_size: new size allocated
 * Return: newly allocated memory pointer
 */
void *_realloc(void *str, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t j, max = new_size;
	char *oldp = str;

	if (str == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == old_size)
	{
		free(str);
		return (NULL);
	}
	else if (new_size == old_size)
		return (str);

	p = malloc(new_size)
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (j = 0; j < max; j++)
		p[j] = oldp[j];
	free(str);
	return (p);
}
