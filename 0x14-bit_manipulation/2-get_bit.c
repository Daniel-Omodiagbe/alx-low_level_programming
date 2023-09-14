#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number to be checked
* @index: index of the bit to be retrieved
* Return: value of index or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (i == index)
		{
			return (n & 1);
		}
		n = n >> 1;
	}
	return (-1);
}
