#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: input
 * @s2: input
 * @n: input
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, y;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		x = 0;
	else
	{
		for (x = 0; s2[x]; x++)
			;
	}
	if (x > n)
		x = n;
	s = malloc(sizeof(char) * (i + x + 1));
	if (s == NULL)
		return (NULL);
	for (y = 0; y < i; y++)
		s[y] = s1[y];
	for (y = 0; y < x; y++)
		s[y + i] = s2[y];
	s[i + x] = '\0';
	return (s);
}

