#include "main.h"

/**
* *string_nconcat - concatenates two strings
* @s1: First string
* @s2: Second string
* @n: number of bytes of s2
* Return: pointer to char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	str = malloc(sizeof(char) * (len1 + n));
	if (str)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}
		if (n >= len2)
		{
			for (j = 0; s2[j] != '\0'; j++, i++)
			{
				str[i] = s2[j];
			}
			str[i] = '\0';
		}
		else
		{
			j = 0;
			for (; i < (len1 + n) && j < n; i++, j++)
			{
				str[i] = s2[j];
			}
			str[i] = '\0';
		}
		return (str);
	}
	return (NULL);
}
