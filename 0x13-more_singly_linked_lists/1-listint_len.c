#include "lists.h"

/**
 * listint_len - this function returns
 * the number of elements in a linked lists
 * @h: the pointer to the head
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
