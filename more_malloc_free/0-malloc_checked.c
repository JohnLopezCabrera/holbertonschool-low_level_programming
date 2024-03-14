#include <stdlib.h>
#include "main.h"
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory with  malloc
 * @b: bytes to allocate
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
