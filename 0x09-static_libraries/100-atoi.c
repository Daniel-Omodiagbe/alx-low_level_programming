#include "main.h"

/**
* _isdigit - checks for a digit
* @c: formal parameter
* Return: 1 if c is a digit and 0 if not
*/

int _isdigit(int c)
{
        char *cc = "0123456789";

        while (*cc != '\0')
        {
                if (*cc == c)
                {
                        return (1);
                }
                cc++;
        }
        return (0);
}

/**
* _atoi - converts a sting to an integer
* @s: pointer to  char
* Return: an integer
*/

int _atoi(char *s)
{
	int i, j;
	int *num;

	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		if (s[i] == '-' || s[i] == '+' || _isdigit(s[i]))
		{
			num[j] = s[i];
		}
	}
	return (0);
}
