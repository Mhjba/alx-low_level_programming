#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *n;
	listint_t *h;

	n = NULL;
	h = NULL;

	while (*head)
	{
		h = (*head)->next;
		(*head)->next = n;
		n = *head;
		*head = h;
	}
	*head = n;
	return (*head);
}
