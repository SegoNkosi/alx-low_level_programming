#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list -  a function that prints all the elements of a list
 * @h: the head of the list
 *
 * Return: the number of nodes (total number)
 */

size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
