#include <stdlib.h>
#include "main.h"

/**
 * *array_range - array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *pointer;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pointer[x] = min++;

	return (pointer);
}
