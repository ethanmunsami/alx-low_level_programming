#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function creates an array of chars
 *
 * @size: The size of the array
 * @c: The character
 *
 * Return: A pointer to the array, NULL if size = 0 or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	if (size == 0)
		return (NULL);

	x = malloc(size * sizeof(char));

	if (x == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}

	return (x);
}
