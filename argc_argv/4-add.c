#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, y, n, len, f, number;

	x = 0;
	y = 0;
	n = 0;
	len = 0;
	f = 0;
	number = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			number = s[x] - '0';
			if (d % 2)
				number = -number;
			n = n * 10 + number;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, num, x, j, k;

	sum = 0;

	for (x = 1; i < argc; x++)
	{
		for (j = 0; argv[x][j] != '\0'; j++)
		{
			if (argv[x][j] > '9' || argv[x][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
