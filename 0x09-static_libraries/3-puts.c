#include "main.h"

/**
* _puts - Prints a string follwoed by a new line
* @str: The parameter to be accepted
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
