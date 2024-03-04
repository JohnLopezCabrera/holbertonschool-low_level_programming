#include "main.h"
/**
 * _memcopy - copy 
 * @dest: dest mem area
 * @src: mem area
 * @n: bytes
 * * Return: pointer dest
 */
char *_memcopy(char *dest, char *src, unsigned int n)
	{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
