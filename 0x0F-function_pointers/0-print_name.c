#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Function prints a name
 *
 * @name: The name
 * @f: The pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
