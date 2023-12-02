#include "hash_tables.h"
/**
 * hash_table_get -  this function retrieves a value associated with a key.
 * @ht: A table
 * @key: A key
 * Return: The value associated with the element,
 * NULL if key couldn’t be found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int pos;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	pos = key_index((unsigned char *)key, ht->size);
	if (pos >= ht->size)
		return (NULL);
	node = ht->array[pos];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}

