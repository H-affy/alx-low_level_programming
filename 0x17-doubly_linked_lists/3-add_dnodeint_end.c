#include "lists.h"

/**
 * add_dnodeint_end - Function that add node to the end of
 * a linked list.
 * @head: head of the list
 * @n: The value of the element
 *
 * Return: The address of the new element, and NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = h;

	return (new);
}
