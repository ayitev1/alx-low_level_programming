#include "main.h"

/**
 * times_table - Entry point
 *
 * this function is to print the 9 times table, starting with 0.
 *
 * Return: 0 Always - Success
 */

void times_table(void)
{
	int x, y, product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;

			if ((product / 10) == 0)
			{
				if (y != 0)
					_putchar(' ');
				_putchar(product + '0');

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
