#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Function returns the length of a string
 *
 * @s: The string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return(0);
	}
	else
	{
		count++;
		s++;
	}
	
_strlen_recursion(s);

return(count);	
}
