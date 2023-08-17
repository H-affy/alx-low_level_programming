#include "lists.h"

/**
 * get_dnodeint_at_index - Function that return the nth node
 * of a linked list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	n = 0;
	while (head != NULL)
	{
		if (n == index)
			break;
		head = head->next;
		n++;
	}
	return (head);
}
