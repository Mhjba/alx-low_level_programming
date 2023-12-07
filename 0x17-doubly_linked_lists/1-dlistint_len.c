#include "lists.h"

/**
 * dlistint_len - returns length of dlist
 * @h: poiner to the head of the list
 *
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
