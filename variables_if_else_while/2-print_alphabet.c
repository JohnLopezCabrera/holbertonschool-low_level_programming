#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int charac;

	charac = 'a';

	while (charac <= 'z')
	{
		putchar(charac);
		charac++;
	}
	putchar('\n');
	return (0);
}
