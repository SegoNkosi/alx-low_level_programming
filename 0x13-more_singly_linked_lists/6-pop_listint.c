#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - this function deletes the
 * head node of a linked list
 * @head: pointer to the first element on the list
 *
 * Return: the data inside the deleted element,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int node;

	if (!head || !*head)
	return (0);

	node = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (node);
}
