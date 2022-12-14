# include "main.h"

/**
 * *cap_string - capitalizes strings
 * @str: a pointer
 * Return: string that is capitalized
 */
char *cap_string(char *str)
{
	char separators[] = ",\t;\n; .!?\"(){}";
	int flag, i, ii;

	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;
		if (i == 0)
		{
			flag = 1;
		}
		else
		{
			for (ii = 0; separators[ii] != '\0'; ii++)
			{
				if (str[i - 1] == separators[ii])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}

