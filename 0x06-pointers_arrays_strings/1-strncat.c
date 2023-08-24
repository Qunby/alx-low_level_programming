#include "main.h"

/**
 * _strncat - function to concatenate 2 strings
 * @dest: destination of string
 * @n: variable integer
 * @src: source of string
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
