#include "main.h"

/**
* print_number - prints an integer
* @n: formal parameter
* Return: Nothing
*/

void print_number(int n)
{
	int i, count = 0;
	int exp, exp1, num, num1;

	while (n / 10 != 0)
	{
		count += 1;
		n = n / 10;
	}

	/*num = count;*/
	exp = 1;
	for (i = 0; i < count; i++)
	{
		exp = exp * 10;
		exp1 = exp;
	}
	for (i = 0; i < count; i++)
	printf("%d\n", n);
	{
		_putchar((n / exp) + 48);
		num1 = n % (num * 10);
		n = num1;
		num = num - 1;
		exp1 = exp1 / 10;
	}
	_putchar(n % 10 + 48);
}
