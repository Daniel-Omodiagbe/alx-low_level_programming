#include "main.h"

/**
* *_strncat - concatenates two strings using n number of bytes
* @dest: first string
* @src: second string
* @n: number of characters to concatenate
* Return: pointer to char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; src[j] != '\0' &&  j < n; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
