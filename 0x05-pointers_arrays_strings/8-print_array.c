#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print elements of an array of integers
 * @a: integer variable
 * @n: integer variable
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
		if (d != n - 1)
			printf("%d, ", a[d]);
		else
			printf("%d", a[d]);
	printf("\n");
}
