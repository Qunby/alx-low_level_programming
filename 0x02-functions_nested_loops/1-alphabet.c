#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	void print_alphabet(void);
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
