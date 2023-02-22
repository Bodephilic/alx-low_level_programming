#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 * followed by a new line.
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int d = 1;

	while (d <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		d++;
		putchar('\n');
	}
}
