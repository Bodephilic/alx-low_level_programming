#include <stdio.h>
#include "main.h"
/**
 * main -  prints the alphabet, in lowercase, followed by a new line
 * Return: Success always (zero)
 */
int main(void)
{       
        char c = 'a';

	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
