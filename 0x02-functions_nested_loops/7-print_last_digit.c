#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * @x: integer value which last digit will be returned
 * this function is to compute the absolute value of an integer.
 * Return: 0 Always - Success
 */

int print_last_digit(int x)
{
	int n;

	if (x < 0)
		n = -1 * (x % 10);
	else
		n = x % 10;

	_putchar('0' + n);
	return (n);
}
