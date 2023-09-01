#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: the memory area
 * @src: bytes from memory
 * @n: unsigned integer variable
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
