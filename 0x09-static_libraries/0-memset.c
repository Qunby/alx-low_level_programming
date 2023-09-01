#include "main.h"

/**
 * _memset -  function to copy data
 * @n: number of bytes of the memory area
 * @s: a pointer to the memory area to be filled
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
