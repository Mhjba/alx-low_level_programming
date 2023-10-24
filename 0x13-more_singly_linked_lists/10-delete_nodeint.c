#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: pointer
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h;
	listint_t *tmp;

	tmp = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL || (h->next == NULL && index != 0))
	{
		return (-1);
	}

	tmp = h->next;

	if (index != 0)
	{
		h->next = tmp->next;
		free(tmp);
	}
	else
	{
		free(h);
		*head = tmp;
	}

	return (1);
}
