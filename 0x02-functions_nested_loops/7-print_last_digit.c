#include "main.h"
/**
 *print_last_digit - return last digit
 *@n : number to check
 *Return:0 or 1
 *
 */

int print_last_digit(int n)
{
int last number;

if (n < 0)
	last number = -1 * (n % 10);
else
	last number = n % 10;

_putchar(last number + '0');
return (last number);
}
