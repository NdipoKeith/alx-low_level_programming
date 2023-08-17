#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: points to the head of the doubly linked list
 * @index: Index of the node, starting from 0.
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
