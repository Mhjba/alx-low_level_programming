#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, le, ri;

	if (array == NULL)
		return (-1);

	for (le = 0, ri = size - 1; le <= ri;)
	{
		printf("Searching in array: ");
		for (i = le; i < ri; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = le + (ri - le) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] < value)
			le = i + 1;
		else
			ri = i - 1;
	}
	return (-1);
}
