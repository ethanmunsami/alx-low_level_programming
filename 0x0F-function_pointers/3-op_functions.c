#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_mod - Function returns the sum of two numbers
  *
  * @a: The first number
  * @b: The second number
  *
  * Return: The sum of two numbers
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_mod - Function returns the difference of two numbers
  *
  * @a: The first number
  * @b: The second number
  *
  * Return: The difference of two numbers
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mod - Function returns the product of two numbers
  *
  * @a: The first number
  * @b: The second number
  *
  * Return: The product of two numbers
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_mod - Function returns the quotient of two numbers
  *
  * @a: The first number
  * @b: The second number
  *
  * Return: The quotient of two numbers
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Function returns the modulo of two numbers
  *
  * @a: The first number
  * @b: The second number
  *
  * Return: The modulo of two numbers
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
