#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: pointer to integer
* @b: pointer to integer
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int num1;


	num1 = *a;
	*a = *b;
	*b = num1;
}
