#include "main.h"

/**
  * _strchr - Function locates the character in a string
  *
  * @s: source string
  * @c: character to find
  *
  * Return: The character from the string
  */
char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
	{
		x++;
	}

	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}

	return ('\0');
}
