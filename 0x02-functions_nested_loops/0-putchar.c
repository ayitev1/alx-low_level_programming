#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * this function is to print _putchar followed by a newline
 * Return: 0 Always - Success
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}

