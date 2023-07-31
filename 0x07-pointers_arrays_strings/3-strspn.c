#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer to string
* @accept: second formal parameter
* Return: return an unsigned integer
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
	}
	return (count);
}
