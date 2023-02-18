#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char d;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (d = 97; d <= 102; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
