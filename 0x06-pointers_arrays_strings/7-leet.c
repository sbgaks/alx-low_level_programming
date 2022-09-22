#include "main.h"

/**
 * *leet - does something leet
 * @str: pointer
 * Return: leet item
 */
char *leet(char *str)
{
	int i, ii;
	char str1[] = "aeotl";
	char Str1[] = "AEOTL";
	char str2[] = "43071";
	
	for (i = 0; str[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (str[i] == str1[ii] || str[i] == Str1[ii])
			{
				str[i] = str2[ii];
				break;
			}
		}
	}
	return (str);
}
