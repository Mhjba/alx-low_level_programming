#include "main.h"
#include <stdlib.h>


/**
 * str_concat -concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int s1m = 0;
	int s2m = 0;
	int i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1m++;
	for (i = 0; s2[i] != '\0'; i++)
		s2m++;

	concat = malloc(sizeof(char) * (s1m + s2m) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concat[s1m + i] = s2[i];
	return (concat);
}

