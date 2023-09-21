#include <stdio.h>

void precedence(void) __attribute__ ((constructor));

/**
  * precedence - function that executes before my main() is executed
  *
  * Return: void.
  */
void precedence(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
