#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Function returns the length of a string
 *
 * @s: The string
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
s++;

return (_strlen_recursion(s));	
}
