#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

/**
 * _strlen - this function will return the
 * length of a string
 * @s: this is the character
 * Return: value is k
 */
int_strlen(const char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * add_node - this function adds a new node at the beginning of a list
 * @head: the head of list_t
 * @str: the value for the element
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;


	add = malloc(sizeof(list_t));
	if (add == NULL)

		return (NULL);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
