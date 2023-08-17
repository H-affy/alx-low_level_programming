#include "lists.h"

/**
 * sum_dlistint - Function that return the sum of all
 * data(n) in linked list
 * @head: head of the list
 *
 * Return: 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int num;

	num = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			num += head->n;
			head = head->next;
		}
	}
	return (num);
}
