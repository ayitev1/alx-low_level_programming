#include "main.h"

/**
 * main - Entry point
 *
 * this function is to print alphabet in lowercase followed by a new line
 * Return: 0 Always - Success
 */

void print_alphabet(void);
int main(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
