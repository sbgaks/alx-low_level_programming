#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	for(i = 0, i < 10, i++)
	{
		char c = 'a';

		while(c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
