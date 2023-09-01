#include <stdio.h>

/**
 * main - to print the number of arguments passed to it
 * @argc: the argument count
 * @argv: the argument
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
