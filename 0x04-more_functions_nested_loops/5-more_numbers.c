#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: void
 */
void more_numbers(void)
{
char x, y;

int number = 0;

while (number < 10)
{
for (x = 0; x <= 14; x++)
{
	if (x > 9)
	{
	_putchar('1');
	}
	_putchar('0' + (x % 10);
}
_putchar('\n');
number++;
}
}
