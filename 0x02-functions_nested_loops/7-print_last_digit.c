#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry point
 * @x: integer value which last digit will be returned
 * this function is to compute the absolute value of an integer.
 * Return: 0 Always - Success
 */

int print_last_digit(int x)
{
	int n;

	n = (x % 10);
	return (n);
}
