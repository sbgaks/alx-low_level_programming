#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: void
 */

void print_numbers(void)
{
char number = 0;

while (number <= 9)
{
	_putchar('0' + number);
	number++;
}
_putchar('\n');
}
