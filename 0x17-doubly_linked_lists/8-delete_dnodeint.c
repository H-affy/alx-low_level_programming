#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that delete node at index
 * of a linked list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: 1 on success, and -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	dlistint_t *h1;
	unsigned int n;

	h = *head;

	if (h == NULL)
		while (h->prev != NULL)
			h = h->prev;
	n = 0;

	while (h != NULL)
	{
		if (n == index)
		{
			if (n == 0)
			{
				*head = h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h1->next = h->next;

				if (h->next != NULL)
					h->next->prev = h1;
			}
			free(h);
			return (1);
		}
		h1 = h;
		h = h->next;
		n++;
	}
	return (-1);
}
