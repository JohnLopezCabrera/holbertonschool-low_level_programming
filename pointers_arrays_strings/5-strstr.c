#include "main.h"
/**
 * _strstr - searches for a substring in a string
 * @haystack:string
 * @needle: substring
 * Return: back to substring or Null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int n, y;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[n + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[n]);
	}
	return (NULL);
}
