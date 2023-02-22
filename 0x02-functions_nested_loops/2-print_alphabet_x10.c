#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 * followed by a new line.
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int d = 0;

	while (d < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		d++;
	}
}
