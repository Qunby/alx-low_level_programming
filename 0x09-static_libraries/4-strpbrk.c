#include "main.h"

/**
 * _strpbrk - function that searches for a string
 * @s: the string
 * @accept: bytes to look for
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}
