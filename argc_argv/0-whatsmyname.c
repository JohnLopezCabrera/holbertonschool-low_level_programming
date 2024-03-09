#include <stdio.h>
#include "main.h"
/**
 * main - prints name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: back to main
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
