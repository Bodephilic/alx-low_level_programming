#include <stdio.h>
#include "main.h"
/**
 * main -  prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: always 0
 */
int main(void)
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
	return (0);
}
