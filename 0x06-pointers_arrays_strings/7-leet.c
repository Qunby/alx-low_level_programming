#include "main.h"

/**
 * leet - functions to encodes a string into 1337
 * @s: string to encode
 * Return: Always 0
 */
char *leet(char *s)
{
	int m, n;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (m = 0; *(s + m); m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (a[n] == s[m])
				s[m] = b[n];
		}
	}
	return (s);
}
