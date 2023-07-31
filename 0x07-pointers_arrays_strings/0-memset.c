#include "main.h"

/**
* *_memset - fills memory with constant byte
* @s: pointer to char
* @b: constant byte
* @n: number of bytes to be filled
* Return: pointer to char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
