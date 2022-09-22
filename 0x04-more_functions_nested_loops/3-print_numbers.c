#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: void
 */

void print_numbers(void)
{
int number = 0;

while (number <= 9)
{
	_putchar(number + 0);
	number++;
}
_putchar('\n');
}
