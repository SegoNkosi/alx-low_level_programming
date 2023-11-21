#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - tis function frees a list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
