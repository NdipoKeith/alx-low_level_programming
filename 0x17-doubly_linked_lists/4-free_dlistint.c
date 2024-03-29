#include "lists.h"

/**
 * free_dlistint - short description
 *
 * @head: argument_1 description
 *
 * Return: returns the description
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
