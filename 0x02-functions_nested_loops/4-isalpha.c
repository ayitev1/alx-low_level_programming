#include "main.h"

/**
 * _isalpha - Entry point
 * @c: a parameter to check for lowercase
 * this function is to check for lowercase character
 * Return: 0 Always - Success
 */
int _isalpha(int c)
{
	char ch, CH;
	int i = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		for (CH = 'A'; CH <= 'Z'; CH++)
		if (ch == c || CH == c)
			i = 1;
	}

	return (i);
}
