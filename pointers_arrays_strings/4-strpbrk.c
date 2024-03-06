#include "main.h"
/**
 *_strpbrk - string to find the byte in
 * @s: string
 * @accept:bytes
 * Return: pointer to byte in string if matched, null if not
 */
char *_strpbrk(char *s, char *accept)
	{
	const char *p;

	while (*s)
	{
	p = accept;
	while (*p)
	{
	if (*s == *p)
	return (s);
	p++;
	}
	s++;
	}
	return ('\0');
	}
