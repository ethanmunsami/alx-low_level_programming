#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * print_binary - Function prints the binary representation of a number
  *
  * @n: The number
  */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
  * _divide - Function divides...
  *
  * @n: The number
  */

void _divide(unsigned long int n)
{
	if (n < 1)

