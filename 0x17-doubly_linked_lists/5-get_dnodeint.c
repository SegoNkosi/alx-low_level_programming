#include "lists.h"

/**
 * get_dnodeint_at_index - this is a function that returns
 * the nth node of a dlistint_t linked list
 *
 * @head: this is the pointer to the head of the list
 * @index: the index of the node to search for
 *
 * Return: the nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
