#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Function prints a linked list
 *
 * @head: The head of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}

	}
	return (0);
}
