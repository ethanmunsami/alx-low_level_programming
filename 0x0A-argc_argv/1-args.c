#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the number of arguments
  *
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Return: (0)
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
