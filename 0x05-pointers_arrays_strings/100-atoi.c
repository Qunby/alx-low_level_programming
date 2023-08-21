#include "main.h"

/**
 * _atoi - function to convert a string into an integer
 * @s: the pointer value to convert
 * Return: Always 0
 */
int _atoi(char *s)
{
	int x = 0;
	unsigned int ni = 0;
	int mn = 1;
	int isi = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			mn *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[x] - '0');
			x++;
		}

		if (isi == 1)
		{
			break;
		}

		x++;
	}

	ni = mn;
	return (ni);
}
