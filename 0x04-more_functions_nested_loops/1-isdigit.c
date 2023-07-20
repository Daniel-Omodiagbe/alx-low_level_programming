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
