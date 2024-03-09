#include <stdio.h>
#include "main.h"
/** main - prints name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */ 
int main(int argcc __attribute((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
