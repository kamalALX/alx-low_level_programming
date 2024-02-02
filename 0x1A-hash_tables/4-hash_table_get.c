#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @key: he key you are looking for
 * @ht: the hash table you want to look into
 *
 * Return: the value associated with the element, or
 *			NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *node = ht->array[idx];

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx =  key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
