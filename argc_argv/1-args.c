#include <stdio.h>
#include "main.h"
/**
 * main - print arguments
 * @argc: argument number
 * @argv: arrays
 * Return: return to main
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
