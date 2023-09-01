#include "main.h"

/**
 * _strcpy - function to copy array
 * @dest: character to check
 * @src: character to check
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
