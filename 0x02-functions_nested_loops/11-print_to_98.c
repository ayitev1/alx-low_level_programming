#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: first operand ofparameters to add
 * this function is to print all natural numbers
 * from n to 98, followed by new line.
 *
 * Return: 0 Always - Success
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
