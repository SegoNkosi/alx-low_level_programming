#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - this function inserts a new node at a give point
 *
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *add;
	listint_t *tempo = *head;

	add = malloc(sizeof(listint_t));
	if (!add || !head)
	return (NULL);

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
	add->next = *head;
	*head = add;
	return (add);
	}

	for (j = 0; tempo && j < idx; j++)
	{
		if (j == idx - 1)
		{
			add->next = tempo->next;
			tempo->next = add;
			return (add);
		}
		else
			tempo = tempo->next;
	}

		return (NULL);
}
