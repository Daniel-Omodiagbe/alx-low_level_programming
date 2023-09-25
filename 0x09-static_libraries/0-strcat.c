#include "main.h"

/**
* *_strcat - concatenates two strings
* @dest: first string
* @src: second string
* Return: pointer to char
*/

char *_strcat(char *dest, char *src)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
