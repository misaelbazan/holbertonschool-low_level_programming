#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	/* Declare variables*/
	char alphabet;

	/* Code starts here*/
	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);

	}

	putchar('\n');

	return (0);
}
