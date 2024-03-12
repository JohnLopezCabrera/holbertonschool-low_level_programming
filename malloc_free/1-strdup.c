#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies string
 * @str: string
 * Return: pointer to string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int x, y;

	x = 0;
	y = 0;

	if (str == NULL)
		return (NULL);

	while (str[y])
		y++;

	dup = malloc(sizeof(char) * (y + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[x] = str[x]) != '\0')
		x++;

	return (dup);
}
