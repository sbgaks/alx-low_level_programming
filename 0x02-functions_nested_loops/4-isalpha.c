#include "main.h"

/**
 * _isalpha - checks for alphabets
 * 
 * @c: subject of test
 *
 * Return: 1 if lowercase 0 if otherwise
 *
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

