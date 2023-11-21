#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - this frees a linked list
 * @head: pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *element;

	if (head == NULL)
	return;

	while (*head)
	{
		element = (*head)->next;
		free(*head);
		*head = element;
	}
	*head = NULL;
}
