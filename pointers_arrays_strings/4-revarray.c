include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, l, rev;

	l = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[l];
		a[l--] = rev;
	}
}
