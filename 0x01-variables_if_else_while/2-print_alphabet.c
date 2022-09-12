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
		lw++;
	}
	putchar('\n');
	return (0);
}
