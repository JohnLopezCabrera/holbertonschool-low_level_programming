#include "main.h"
/**
 * _memcpy - copy
 * @dest: dest mem area
 * @src: mem area
 * @n: bytes
 * * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
	{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
