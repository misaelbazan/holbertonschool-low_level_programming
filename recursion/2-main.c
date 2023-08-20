#include "main.h"
#include <stdio.h>

/**
 * main - program that calls a function for return a length of a string
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	return (0);
}
