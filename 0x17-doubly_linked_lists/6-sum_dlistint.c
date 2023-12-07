#include "lists.h"

/**
 *  sum_dlistint - returns the sum
 * @head: double pointer to the head of the list
 *
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
