#include "main.h"

/**
 *times_table - prints times table
 *Return:void
 */

void times_table(void)
{
int y = 0;

int z;

int r;

while (y <= 9)
{
	z = 0;
	while (z <= 9)
	{
		r = y * z;
		if (z == 0)
		{
		_putchar('0' + r);
		}
		else if (r < 10)
		{
		_putchar(' ');
		_putchar('0' + r);
		}
		else
		{
		_putchar('0' + r / 10);
		_putchar('0' + r % 10);
		}
		if (z < 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		z++;
	}
	_putchar('\n');
	y++;
}
}
