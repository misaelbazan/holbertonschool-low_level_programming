#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives with a new line
 *
 * @argc: arguments count
 * @argv: array of char
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
