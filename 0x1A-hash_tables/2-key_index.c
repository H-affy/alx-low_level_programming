#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of the key
 * @key: Ths key
 * @size: The side of the array of the hash table
 *
 * Desc: Uses the djb2 algorithm
 * Return: index at which the key/value pair should be stored in
 * the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
