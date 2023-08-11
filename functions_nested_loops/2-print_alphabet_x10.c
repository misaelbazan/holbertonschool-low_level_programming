#include "main.h"

/**
 * print_alphabet_x10 - function for printing the alphabet ten times
 *
 * Return: Always (void)
 */

void print_alphabet_x10(void)
{
	char c;
	int times;

	for (times = 0; times <= 10; times++)
	{

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}


		_putchar('\n');
	}

}
