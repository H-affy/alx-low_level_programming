#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all data of a listint_t linked list
 * @head: first node in the listint linked list
 *
 * Return: sum of all data, and 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s += temp->n;
		temp = temp->next;
	}
	return (s);
}
