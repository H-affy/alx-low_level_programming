#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the first element in the listint_t linked list.
 *
 * Return: the head node data, and if empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int s;

	if (!head || !*head)
		return (0);

	s = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (s);
}
