#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - causes normal process termination with a status value of 98
 * @b: memory allocated
 * Return:  pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *value;

	value = malloc(b);
	if (value == NULL)
	{
		exit(98);
	}
	return (value);
}
