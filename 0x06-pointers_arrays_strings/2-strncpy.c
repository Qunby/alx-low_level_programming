#include "main.h"

/**
 * _strncpy - functiontat copies a string
 * @n: variable integer
 * @src: source of strings
 * @dest: destination of the string
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && *(src + c); c++)
	{
		*(dest + c) = *(src + c);
	}
	for (; c < n; c++)
	{
		*(dest + c) = '\0';
	}
	return (dest);
}
