#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Function creates an array of integers
 *
 * @min: Minimum
 * @max: Maximum
 *
 * Return: A pointer to the new array,
 * or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *x, i = 0;

	if (min > max)
		return (NULL);

	x = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[i] = min;
		i++;
		min++;
	}

	return (x);
}
