#include "lists.h"

/**
 * get_nodeint_at_index - tis function returns the nth
 * of a node of a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *tempo = head;

	while (tempo && k < index)
	{
		tempo = tempo->next;
		k++;
	}

	return (tempo ? tempo : NULL);
}
