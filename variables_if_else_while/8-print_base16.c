#include <stdio.h>

/**
 * main - program that prints all the base 16 numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int h;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (h = 'a'; h < 'g'; h++)
	{
		putchar(h);
	}

	putchar(10);

	return (0);
}
