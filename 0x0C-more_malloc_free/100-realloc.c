#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory  block using malloc and free
 * @ptr: input
 * @old_size: input
 * @new_size: input
 *
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *oldp = ptr;
	unsigned int i, max = new_size;

	if (ptr  == NULL)
	{
		ptr1 = malloc(new_size);
		return (ptr1);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		ptr1[i] = oldp[i];
	free(ptr);
	return (ptr1);
}
