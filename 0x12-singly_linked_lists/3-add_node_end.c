#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - tsi function adds nodes to
 * the end of the list
 * @head: the head of the node
 * @str: the string
 * Return: new alement address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *temp;
	unsigned int j, count = 0;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	for (j = 0; str[j] != '\0'; j++)
		count++;
	add->len = count;
	add->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = add;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add;
	}
	return (*head);
}
