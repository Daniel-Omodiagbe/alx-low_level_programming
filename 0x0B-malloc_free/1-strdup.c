#include "main.h"

/**
* *_strdup - function that returns a pointer to a newly allocated space
* @str: string to duplicate
* Return: pointer to char
*/

char *_strdup(char *str)
{
	int i, len = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	s = malloc((sizeof(char) * len) + 1);
	if (s)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			s[i] = str[i];
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}
