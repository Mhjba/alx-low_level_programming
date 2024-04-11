#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searche value in sorted array 
 *  
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int j;
	size_t index;

	if (array == NULL || size == 0)
		return (-1);
	j = sqrt(size);
	index = 0;
	do {
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		index += j;
		if (index >= size)
			break;
	} while (array[index] < value);
	printf("Value found between indexes [%lu] and [%lu]\n", index - j, index);
	index -= j;
	while (array[index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		++index;
		if (index == size)
			return (-1);
	}
	if (array[index] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		return (index);
	}
	return (-1);
}
