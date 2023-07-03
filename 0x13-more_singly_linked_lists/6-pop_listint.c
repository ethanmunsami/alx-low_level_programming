#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - Function deletes the head node of a linked list,
  * and returns the head node’s data (n)
  *
  * @head: The head of the linked list
  *
  * Return: The head nodes data (n)
  */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
