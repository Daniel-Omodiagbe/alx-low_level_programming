#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: formal parameter
* Return: 1 if alphabet is lower and 0 when it is not
*/

int _isalpha(int c)
{
	char *ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (*ch != '\0')
	{
		if (c == *ch)
		{
			return (1);
		}
		ch++;
	}
	return (0);
}
