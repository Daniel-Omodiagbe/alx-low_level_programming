#include "main.h"
#include <stdio.h>
/**
* *_strstr - locates a substring
* @haystack: parameter to search
* @needle: second parameter
* Return: pointer to char
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;


	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j++])
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}

