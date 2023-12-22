#include "hash_tables.h"

/**
  * hash_table_delete - Deletes a hash table
  * @ht: hash table.
  *
  * Return: Nothing
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				node = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
