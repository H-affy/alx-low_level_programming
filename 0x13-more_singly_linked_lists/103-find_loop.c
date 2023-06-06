#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - find the loop in listint_t linked list.
 * @head: pointer to the first element of the listint_t linked list.
 *
 * Return: the address of the node where the loops start
 * and NULL if there no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *good = head;
	listint_t *nice = head;

	if (!head)
		return (NULL);
	while (good && nice && nice->next)
	{
		nice = nice->next->next;
		good = good->next;
		if (nice == good)
		{
			good = head;
			while (good != nice)
			{
				good = good->next;
				nice = nice->next;
			}
			return (nice);
		}
	}
	return (NULL);
}
