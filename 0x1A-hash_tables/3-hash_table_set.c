#include "hash_tables.h"

/**
 * hash_table_set - add an element to the table
 * @ht: pointer to the hash table
 * @key: index where an element will be added
 * @value: value to be added
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int i, index;
	char *cpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy = strdup(value);

	if (cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cpy;
			return (1);
		}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (free(cpy), 0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (free(new_node), 0);

	new_node->value = cpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
