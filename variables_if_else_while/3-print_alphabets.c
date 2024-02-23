#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chara;

	for (chara = 'a'; chara <= 'z'; chara++)
		putchar(chara);
	for (chara = 'A'; chara <= 'Z'; chara++)
		putchar(chara);
	putchar('\n');
	return (0);
}
