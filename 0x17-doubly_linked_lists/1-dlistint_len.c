#include "lists.h"

/**
 * dlistint_len - A function that returns number of element
 * in a linked list.
 * @h: head
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cout;

	cout = 0;

	if (h == NULL)
		return (cout);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		cout++;
		h = h->next;
	}
	return (cout);
}
