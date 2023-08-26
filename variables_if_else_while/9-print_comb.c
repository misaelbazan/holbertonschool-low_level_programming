#include <stdio.h>

/**
 * main -program that putchar all single numbers in ascendent way
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
