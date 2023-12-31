#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b)
	{
		while (*b != '\0')
		{
			if (*b != '0' && *b != '1')
			{
				return (0);
			}
			num = (num << 1) | (*b - '0');
			b++;
		}
		return (num);
	}
	return (0);
}
