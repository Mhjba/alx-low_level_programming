#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer
 * @str: new string to add in the node
 *
 * Return: address of the new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i, len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}

