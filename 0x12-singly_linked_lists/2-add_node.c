#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds new node at the beginning of a list_t list
 * @str: new string to add in the node
 * @head: the double pointer to the list_t list
 *
 * Return: the address of teh new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
