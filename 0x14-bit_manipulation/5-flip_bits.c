#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip
* @n: first number
* @m: second number
* Return: numbers of bits flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num, count = 0;

	num = n ^ m;
	while (num != 0)
	{
		count = count + (num & 1);
		num = num >> 1;
	}
	return (count);
}
