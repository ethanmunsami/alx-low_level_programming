#include "function_pointers.h"

/**
 * print_name - Function prints a name
 *
 * @name: The name
 * @f: The pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
