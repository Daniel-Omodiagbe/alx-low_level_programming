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
	int j;

	for (j = 0; src[j] != '\0' &&  j < n; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
