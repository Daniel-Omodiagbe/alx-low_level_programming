#include "main.h"

/**
* _strlen_recursion - returns the len of a string
* @s: string to check for it length
* Return: length of string
*/

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		len =  (1 + _strlen_recursion(s + 1));
	}
	return (len);
}
