#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char lw = 'a';

	while (lw <= 'z')
	{
		putchar(lw);
		putchar('\n');
		lw++;
	}
	return (0);
}
