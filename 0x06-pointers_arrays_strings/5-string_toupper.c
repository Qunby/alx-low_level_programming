#include "main.h"

/**
 * string_toupper - changes all lowercase letter of a string to upper case
 * @s: string
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
