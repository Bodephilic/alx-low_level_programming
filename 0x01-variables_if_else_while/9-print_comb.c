#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
