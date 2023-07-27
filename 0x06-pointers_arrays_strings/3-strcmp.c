#include "main.h"

/**
* _strcmp - compares two strings
* @s1: First string
* @s2: Second string
* Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	if (len1 < len2)
	{
		return (-15);
	}
	else if (len1 > len2)
	{
		return (15);
	}
	return (0);
}
