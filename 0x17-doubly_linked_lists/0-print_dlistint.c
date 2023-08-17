#include "lists.h"

/**
 * print_dlistint - A function that print all element of dlistint list
 * @h: Head
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cout;

	cout = 0;

	if (h == NULL)
		return (cout);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		cout++;
		h = h->next;
	}
	return (cout);
}
