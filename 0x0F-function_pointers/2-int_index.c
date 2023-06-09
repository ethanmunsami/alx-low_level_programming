#include "function_pointers.h"

/**
  * int_index - Function searches for an integer
  *
  * @array: The array
  * @size: The size of the array
  * @cmp: The pointer to the function
  *
  * Return: The index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
