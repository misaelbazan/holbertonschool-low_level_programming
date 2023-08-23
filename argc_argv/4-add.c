#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that adds every positive number from console
 *
 * @argc: argument count
 * @argv: arrays of string
 *
 * Return: 0 if sum is succesful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int number;
	int iterator;

	if (argc > 1)
	{
		for (iterator = 1; iterator < argc; iterator++)
		{
			number = atoi(argv[iterator]);
			sum += number;
		}
		printf("%d\n", sum);
	}

	else
	{
		printf("0\n");
	}
	return (0);
}
