#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print sums of the two diagonals of a matrix
 * @a: pointer to start of matrix
 * @size: size of matrix column
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
