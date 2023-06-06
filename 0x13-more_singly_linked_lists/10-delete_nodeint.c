#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete the node of a listint_t linked list
 * @head: pointer of the first element
 * @index: index of the node to be deleted
 *
 * Return: 1 if it is successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int s = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (s < index - 1)
	{
		if (!temp || (!temp->next))
			return (-1);
		temp = temp->next;
		s++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
