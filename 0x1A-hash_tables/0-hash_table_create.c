#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* Allocate memory for the hash table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Set the size of the hash table */
	ht->size = size;

	/* Allocate memory for the array of hash nodes */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
