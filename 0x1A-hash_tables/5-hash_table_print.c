#include "hash_tables.h"

/**
  * hash_table_print - Prints a hash table
  * @ht: hash table.
  *
  * Return: Nothing.
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i;
	char tmp = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (tmp == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			tmp = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
