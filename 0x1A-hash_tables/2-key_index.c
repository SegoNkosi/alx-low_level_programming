#include "hash_tables.h"

/**
 * key_index - This function gives the index of  key
 *
 * @key: The key to get the index from
 * @size: size of the array of the hash table
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
