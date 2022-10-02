#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * this function is to print alphabet in lowercase followed by a new line
 * ten times
 * Return: 0 Always - Success
 */
void print_alphabet(void)
{
	char i;
	int nb;
	for (nb=0, nb<10, nb++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
