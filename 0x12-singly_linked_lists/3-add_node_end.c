#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list.
 * @head: double pointer.
 * @str: string.
 *
 * Return: address of the new element, or NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;
	unsigned int i, len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	new->len = len;
	new->next = NULL;
	ptr = *head;

	if (ptr == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (*head);
}
