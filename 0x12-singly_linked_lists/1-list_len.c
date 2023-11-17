#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - this function returns the numbe
 * of elements in a linked list
 * @h: the node head
 * Return: the node length
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;

	}
	return (counter);
}
