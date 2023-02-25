#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14
 * follow by new line
 * Return:void
 */

void more_numbers(void)
{
	int n = 0;
	char c;

	while (n < 10)
	{
		for (c = '1'; c <= '14'; c++)
			_putchar(c);
		putchar('\n');
		n++
	}
	return (0);
}

