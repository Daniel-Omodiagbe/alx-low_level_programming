#include "main.h"

/**
* *str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to char
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0, sum_len = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	sum_len = len1 + len2 + 1;
	str = malloc(sizeof(char) * sum_len);
	if (str)
	{
		for (i = 0; i < len1; i++)
		{
			str[i] = s1[i];
		}
		j = 0;
		for (; i < sum_len && j < len2; i++)
		{
			str[i] = s2[j];
			j++;
		}
		str[i] = '\0';
		return (str);
		}
	return (NULL);
}
