#include "main.h"

/**
 * _islower -  function that checks for lowercase character
 * @c: the character to be checked
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		return (1);
	}
	else
		return (0);
}
