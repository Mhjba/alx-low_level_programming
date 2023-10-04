#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strdup -returns a pointer to a newly allocated space in memory.
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *m;
	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	m = malloc(sizeof(char) * (i + 1));

	if (m == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		m[x] = str[x];

	return (m);
}
