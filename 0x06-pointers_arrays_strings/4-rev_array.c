#include "main.h"

/**
  * reverse_array - The faunction that  reverses
  * the content of an array of integers
  *
  * @a: Function parameter one
  *
  * @n: Function parameter two
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
	r = a[k];
	a[k] = a[n];
	a[n] = r;
	}
}
