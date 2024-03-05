#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n, f, ret;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		ret = 0;
		for (n = 0; accept[j] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				f++;
				ret = 1;
			}
		}
		if (ret == 0)
		{
			return (f);
		}
	}

	return (0);
}
