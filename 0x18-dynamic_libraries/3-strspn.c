#include "main.h"

/**
  * _strspn - Function searches a string for a set of bytes
  *
  * @s: source string
  * @accept: accepted string
  *
  * Return: The number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y, i = 0;

	while (accept[x])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[x] == s[y])
			{
				i++;
			}

			y++;
		}

		x++;
	}

	return (i);
}
