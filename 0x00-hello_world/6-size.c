#include <stdio.h>
/**
 * main - print a text
 * void : nothing in
 * The function main prints the text followed by a new line using printf.
 * and program should compile without warning when using the -Wall gcc option
 * Return: 0 at the end
 */

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
