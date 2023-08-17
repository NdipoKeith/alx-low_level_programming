#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 *
 * @head: points to the head of the doubly linked list
 *
 * Return: return description
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (sum);
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
