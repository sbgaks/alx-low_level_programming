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
	y = x;
	if (x > 9)
	{
	_putchar('1');
	y = x % 10;
	}
	_putchar('0' + y);
}
_putchar('\n');
number++;
}
}
