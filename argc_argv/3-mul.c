#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that takes two arguments from cmd line and multiplies both
 *
 * @argc: argument count, includes the name of the program
 * @argv: is an array of char ptrs, listing all the arguments
 *
 * Return: 0 if argc is 3, 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int number1 = atof(argv[1]);
		int number2 = atof(argv[2]);
		int result = number1 * number2;

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

