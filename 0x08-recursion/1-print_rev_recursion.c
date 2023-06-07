#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Function prints a string in reverse
 *
 * @s: The string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
