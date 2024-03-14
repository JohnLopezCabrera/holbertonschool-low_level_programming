#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory
 * @s: memory
 * @b: char
 * @n: number of times to copy
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for array
 * @nmemb: elements in the array
 * @size: size of elements
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
