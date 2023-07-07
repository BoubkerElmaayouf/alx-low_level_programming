#include "hash_tables.h"

/**
* create_hash_table - this function Creates a hash table.
* @size: The size of the array.
* Return: If an error occurs - NULL.
*         else - The pointer to the new hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tabl = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (tabl == NULL)
	{
		return (NULL);
	}

	tabl->size = size;
	tabl->array = malloc(sizeof(hash_node_t *) * size);
	if (tabl->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		tabl->array[i] = NULL;

	return (tabl);
}
