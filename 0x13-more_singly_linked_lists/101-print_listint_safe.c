#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of nodes in a looped linked list.
 * @head: pointer to the first element in a linked list.
 *
 * Return: 0 if the list is not looped, otherwise the unique node.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *name, *love;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	name = head->next;
	love = (head->next)->next;
	while (love)
	{
		if (name == love)
		{
			name = head;
			while (name != love)
			{
				n++;
				name = name->next;
				love = love->next;
			}
			name = name->next;
			while (name != love)
			{
				n++;
				name = name->next;
			}
			return (n);
		}
		name = name->next;
		love = (love->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first elements of listint linked list.
 *
 * Return: the number of node in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t s, i = 0;

	s = looped_listint_len(head);

	if (s == 0)
	{
		for (; head != NULL; s++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < s; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (s);
}
