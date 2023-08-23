#include "main.h"

/**
  * _strpbrk - Function searches a string for any set of bytes
  *
  * @s: source string
  * @accept: accepted characters
  *
  * Return: The string character
  */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;

		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}

			y++;
		}

		x++;
	}

	return ('\0');
}
