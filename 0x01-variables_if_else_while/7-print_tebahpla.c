#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char lw;

	for (lw = 'z'; lw <= 'z' && lw >= 'a'; --lw)
	{
		putchar(lw);
	}
	putchar('\n');
	return (0);
}
