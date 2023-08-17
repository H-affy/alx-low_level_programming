#include "lists.h"

/**
 * free_dlistint - Function that frees a linked list
 * @head: head
 *
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
