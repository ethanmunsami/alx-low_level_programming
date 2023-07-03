#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - Function  returns the sum of all the data,
  * of a linked list
  *
  * @head: The head of the linked list
  *
  * Return: The sum of all the data
  */

int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
