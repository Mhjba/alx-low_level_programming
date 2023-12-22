#include "hash_tables.h"

/**
  * hash_table_set - sets a key to a value in the hash table
  * @ht:  hash table.
  * @key: key of a value.
  * @value: value for the node.
  *
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp, *new_node;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];

	if (tmp && strcmp(key, tmp->key) == 0)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
