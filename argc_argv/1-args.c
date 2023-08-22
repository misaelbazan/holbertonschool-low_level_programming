#include <stdio.h>

/**
 * main - program that prints the # of arg passed into it
 *
 * @argc: numbers of arguments of the main program
 * @argv: array of char type
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
