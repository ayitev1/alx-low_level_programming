#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int a;
	char b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
