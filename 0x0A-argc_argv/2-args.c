#include <stdio.h>

/**
 * main - function to print all the argument it receives
 * @argc: argument count
 * @argv: the argument
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
