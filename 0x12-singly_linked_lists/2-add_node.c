#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Function adds a new node at the beginning of a list
  *
  * @head: The OG linked list
  * @str: The string to add
  *
  * Return: The address of the new list,
  * or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
  * _strlen - Function returns the length of a string
  *
  * @s: The string
  *
  * Return: The length of the string
  */

int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
