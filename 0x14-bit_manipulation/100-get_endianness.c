#include "main.h"

/**
* get_endianness - checks the endianness
* Return: 0 if big endianness or 1 if little endianness
*/

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	if ((int)*c == 0x10)
	{
		return (0);
	}
	return (1);
}
