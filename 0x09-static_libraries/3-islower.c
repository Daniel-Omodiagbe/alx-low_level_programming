#include "main.h"

/**
* _islower - checks for lowercase character
* @c: formal parameter
* Return: 1 if alphabet is lower and 0 when it is not
*/

int _islower(int c)
{
	char *ch = "abcdefghijklmnopqrstuvwxyz";

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
