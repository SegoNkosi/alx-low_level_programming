#include "main.h"
#include <stdlib.h>

/**
 * array_range - this creates an array of integers
 * @min: value, min
 * @max: value, max
 * Return: pointer for int, to allocated memory
 */
int *array_range(int min, int max)
{
	int l, r;
	int *b;

	if (min > max)
		return (NULL);
	r = max - min + 1;
	b = malloc(sizeof(int) * r);
	if (b == NULL)
		return (NULL);
	for (l = 0; l < 1; l++)
	{
		b[l] = min;
		min++;
	}
	return (b);
}
