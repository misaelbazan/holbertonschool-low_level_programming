#include "main.h"
#include <stdio.h>

/**
 * main - program that calls a function that returns a factorial of a given number
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}
