#include "main.h"

/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: first formal parameter
* @accept: second formal parameter
* Return: point to char or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	if (!accept)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[i] == s[i])
		{
			break;
		}
	}
	return (s + i - 1);
}
