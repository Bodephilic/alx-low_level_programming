#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14
 * follow by new line
 * Return:void
 */

void more_numbers(void)
{
	int n = 0;
	int m = 10;
	char c;
	
	while (n < 10)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		while (m <= 14)
		{
			_putchar((m/10) + 48);
			_putchar((m%10) + 48);
			m++;
		}
		n++;
	}
}
