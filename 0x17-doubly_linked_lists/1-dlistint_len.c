#include <stdlib.h>
#include "lists.h"

/**
  * dlistint_len - Function counts the number of elements in a doubly linked list
  *
  * @h: The double linked list to count
  *
  * Return: The number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}
