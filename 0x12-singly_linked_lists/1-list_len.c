#include "lists.h"

/**
 * list_len - this function returns the numbe
 * of elements in a linked list
 * @h: the node head
 * Return: the node length
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;

	}
	return (elements);
}
