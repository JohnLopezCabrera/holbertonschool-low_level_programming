#include "main.h"
/**
 * _strncat - concatenates n bytes
 * @dest: destination
 * @src: string
 * @n: number of str bytes to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
		while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
