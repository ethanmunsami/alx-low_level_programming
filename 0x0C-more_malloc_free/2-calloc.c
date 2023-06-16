#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Function memory for an array
 *
 * @nmemb: The number of elements
 * @size: The amount of bytes
 *
 * Return: A pointer to the allocated memory,
 * or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	x = malloc(j);

	if (x == NULL)
		return (NULL);

	while (i < j)
	{
		x[i] = 0;
		i++;
	}

	return (x);
}
