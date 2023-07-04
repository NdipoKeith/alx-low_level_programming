#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: head of a list
 *
 * Return: results of the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
