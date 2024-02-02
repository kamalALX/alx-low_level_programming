#include "hash_tables.h"

/***/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx =  key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[idx];

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	while (node != NULL)
	{
		if (strcmp(node->key, key))
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
