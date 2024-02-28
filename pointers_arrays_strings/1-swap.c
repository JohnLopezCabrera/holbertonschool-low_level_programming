#include "main.h"
/**
 *swap_int - swapsvalues of two integers
 *@a: pointer first value
 *@b: pointer second value
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
