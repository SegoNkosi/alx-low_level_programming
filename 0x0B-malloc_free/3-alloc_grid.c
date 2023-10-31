#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 * Return: pointer to an array of int
 */
int **alloc_grid(int width, int height)
{
	int k, l;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);

	}
	for (k = 0; k < height; k++)
	{
		gridout[k] = malloc(width * sizeof(int));
		if (gridout[k] == NULL)
		{
			for (k--; k >= 0; k--)
			free(gridout[k]);
			free(gridout[k]);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
		for (l = 0; l < width; l++)
			gridout[k][l] = 0;

	return (gridout);

}
