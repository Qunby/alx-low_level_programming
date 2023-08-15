#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	print_alphabet();

	char b;

	for (b = 'a' ; b <= 'z' ; b++)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
}
