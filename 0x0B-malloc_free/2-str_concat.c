#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function concatenates two strings
 *
 * @s1: String one
 * @s2: String two
 *
 * Return: The concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *x;

	if (s1 == NULL)
		s1 = "";

	if s2 == (NULL)
		s2 = "";

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	d = a + b;

	x = malloc((sizeof(char) * d) + 1);

	if (x == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			x[c] = s1[c];

		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}

		c++;
	}

	return (x);
}
