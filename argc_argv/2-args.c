#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc:arguments
 * @argv: arrays
 * Return: back to main
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	return (0);
}

