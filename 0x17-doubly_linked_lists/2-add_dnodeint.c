#include "lists.h"
/**
 * add_dnodeint - Adds new head nods to list
 * @head: address of pointer to current head node
 * @n: int of new node
 *
 * Return: Address of the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;

	*head = node;
	return (node);
}
