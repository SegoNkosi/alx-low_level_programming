#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_node - this function adds a new node at the beginning of a list
 * @head: the head of list_t
 * @str: the value for the element
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int k, count = 0;


	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		count++;
	add->len = count;
	add->next = *head;
	*head = add;

	return (*head);
}

