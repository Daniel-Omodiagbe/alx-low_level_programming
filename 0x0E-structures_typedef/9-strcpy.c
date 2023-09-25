#include "main.h"

/**
* *_strcpy - copies a string
* @dest: first fprmal parameter
* @src: second formal parameter
* Return: pointer to a str
*/

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	i = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		*(dest + i) = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}
