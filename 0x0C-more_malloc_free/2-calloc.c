#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - unction that allocates memory for an array
 * @nmemb: allocates memory for array
 * @size: allocates the element of size bytes
 * Return: NULL if failled
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		a[x] = 0;
	return (a);
}

