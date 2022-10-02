#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry point
 * @x: integer value which absolute value will be computed
 * this function is to compute the absolute value of an integer.
 * Return: 0 Always - Success
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
