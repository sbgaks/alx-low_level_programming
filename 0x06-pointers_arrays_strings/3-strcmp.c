#include "main.h"

/**
 *_strcmp - compare between two strings
 * @s1 : pointer
 * @s2 : pointer 
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

int x;

while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
{
i++;
}
x = s1[i] - s2[i];
return (x);
}
