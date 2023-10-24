#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int node;
	listint_t *tmp;

	if (!head || !*head)
		return (0);
	node = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (node);
}

