#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function allocates memory
 * 
 * @b: The number of arguments
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
