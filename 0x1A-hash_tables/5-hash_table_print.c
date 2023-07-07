#include "hash_tables.h"
/**
 * hash_table_print - this function prints a hash table.
 * @ht: table
 * Return: noting
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	int f = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (!f)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			f = 0;
			node = node->next;
			}
		}
	printf("}\n");

}
