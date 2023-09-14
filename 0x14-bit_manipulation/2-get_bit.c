#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number to be checked
* @index: index of the bit to be retrieved
* Return: value of index or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, count = 0;
	unsigned long int num;

	num = n;
	while (num != 0)
	{
		count++;
		num = num >> 1;
	}
	if (index > count - 1)
	{
		return (-1);
	}
	for (i = 0; i < count; i++)
	{
		if (i == index)
		{
			return (n & 1);
		}
		n = n >> 1;
	}
	return (-1);
}
