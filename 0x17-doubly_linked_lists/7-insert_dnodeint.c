#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that insert a new
 * nod at a given position.
 * @h: The head of the list
 * @idx: Index
 * @n: Number of the element
 *
 * Return: The address of the new node, and NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int m;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		m = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (m == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, m);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			m++;
		}
	}
	return (new);
}
