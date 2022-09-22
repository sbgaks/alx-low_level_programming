#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to ninety eight
 * @n: integer
 * Return: void
 */

void print_to_98(int n)
{
int number;
if (n < 98)
{
for (number = n; number <= 98; number++)
{
printf("%i, ", number);
}
}
else if (n > 98)
for (number = n; number >= 98; number--)
{
printf("%i, ", number);
}
}
