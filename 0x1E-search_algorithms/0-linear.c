#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  * of integers using linear search
  *
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: value to search for
  *
  * Return: -1 If the value is not present or the array is NULL,
  * else, the first index where the value is located
  *
  * Description: This prints a value every time it is compared in the array
  */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
