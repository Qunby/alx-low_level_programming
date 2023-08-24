#include "main.h"

/**
 * reverse_array - reversing array
 * @a: an array of integer
 * @n: Number of element of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int d, f;

	for (d = 0; (d < (n - 1) / 2); d++)
	{
		f = a[d];
		a[d] = a[n - 1 - d];
		a[n - 1 - d] = f;
	}
}
