#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - this function prints a linked list
 * @h: pointer to the first node
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dif;
	listint_t *tempo;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
