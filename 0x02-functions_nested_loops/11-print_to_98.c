#include "main.h"

/**
 * print_to_98 - prints to ninety eight
 * @n: integer
 * Return: void
 */

void print_to_98(int n)
{
int number;

for (number = n, number <= 98, number++)
{
_putchar(0 + number);
_putchar(',');
_putchar(' ');
}

