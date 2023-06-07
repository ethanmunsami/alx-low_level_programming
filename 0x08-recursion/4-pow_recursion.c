#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Function returns the value of x to the power of y
 *
 * @x: The base number
 * @y: The power
 *
 * Return: The result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
