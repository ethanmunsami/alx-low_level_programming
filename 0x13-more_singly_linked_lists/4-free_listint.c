#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Function frees a linked list
  *
  * @head: The head of the linked list
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
