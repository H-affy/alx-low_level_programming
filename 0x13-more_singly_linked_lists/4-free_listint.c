#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function that free a listint_t list
 * @head: listint_t list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
