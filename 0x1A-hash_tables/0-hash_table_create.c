#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - create a hash table
 *
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);

}
