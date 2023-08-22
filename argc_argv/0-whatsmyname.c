#include <stdio.h>

/**
 * main - program that prints it's own executable name
 *
 * @argc: its the number of parameters
 * @argv: counts each parameter
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
