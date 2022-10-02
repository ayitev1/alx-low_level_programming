#include <stdio.h>
#include "main.h"

/**
 * print_sign - Entry point
 * @n: a parameter to check
 * this function is to compare to 0 and return 0 or 1 and print sign
 * Return: 0 Always - Success
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	else
	{
		i = 0;
		_putchar('0');
	}
	return (i);
}
