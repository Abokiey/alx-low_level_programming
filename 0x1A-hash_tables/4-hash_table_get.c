#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key
 * @ht: hash table to look into
 * @key: key being looked for
 * Return: value associated with the element
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *h_node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	h_node = ht->array[indx];
	while (h_node && strcmp(h_node->key, key) != 0)
		h_node = h_node->next;

	if (h_node == NULL)
		return (NULL);

	return (h_node->value);

}
