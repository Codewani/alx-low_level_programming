#include <stdlib.h>
#include "main.h"

/**
 * *array_range - The creates an array of integers
 * @min: The minimum range of values stored
 * @max: The maximum range of values stored and number of elements
 *
 * Return: the pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pt;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pt = malloc(sizeof(int) * size);

	if (pt == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		pt[j] = min++;

	return (pt);
}
