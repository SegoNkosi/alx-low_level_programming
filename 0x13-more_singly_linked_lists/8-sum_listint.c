#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t linked list
 * @head: first node in the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (tempo)
	{
	sum += tempo->n;
	tempo = tempo->next;
	}

	return (sum);
}
