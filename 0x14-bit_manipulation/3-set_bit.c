#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to unsigned long int
* @index: index of position where value should be set
* Return: 1 or -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, num;
	unsigned int count;

	num = *n;
	while (num != 0)
	{
		count++;
		num = num >> 1;
	}
	if (index > count - 1)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
