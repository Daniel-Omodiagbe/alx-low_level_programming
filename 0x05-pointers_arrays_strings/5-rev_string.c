#include "main.h"

/**
* rev_string - reverses a string
* @s: pointer to char
* Return: Nothing
*/

void rev_string(char *s)
{
	int i, count = 0;
	char str;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	str = s;
	for (i = 0; i < count; i++)
	{
		str = s;
		s--
	}
}
