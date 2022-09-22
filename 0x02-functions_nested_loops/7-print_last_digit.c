#include "main.h"
/**
 *print_last_digit - return last digit
 *@n : number to check
 *Return:0 or 1
 *
 */

int print_last_digit(int n)
{
int last_number;

if (n < 0)
{
	last_number = -1 * (n % 10);
}
else
{
	last_number = n % 10;
}

_putchar(last_number + '0');
return (last_number);
}
