#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
		count++;
	s++;
	_strlen_recursion();
}
