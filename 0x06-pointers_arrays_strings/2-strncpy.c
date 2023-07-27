#include "main.h"

/**
* *_strncpy - copies a strings using n number of bytes
* @dest: first string
* @src: second string
* @n: number of characters to concatenate
* Return: pointer to char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j, i, len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}
	if (n < len)
	{
		for (j = 0; src[j] != '\0' &&  j < n; j++)
		{
			dest[j] = src[j];
		}
		return (dest);
	}
	else
	{
		for (j = 0; src[j] != '\0' && j < n; j++)
		{
			dest[j] = src[j];
		}
		for (i = j; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
