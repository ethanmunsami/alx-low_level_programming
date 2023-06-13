#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function returns a pointer to copy of a string
 *
 * @str: The string given as a parameter
 *
 * Return: A pointer to the duplicated string or NULL if str is NULL
 */

char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *x;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	x = malloc((sizeof(char) * j) + 1);

	if (str == NULL)
		return (NULL);

	while (i < j)
	{
		x[a] = str[i];
		i++;
	}

	return (x);
}
