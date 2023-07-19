#include "main.h"

/**
* times_table - prints 9 times table
* Return: Nothing
*/

void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if ((num1 * num2) > 9)
			{
				_putchar((num1 * num2) / 10 + 48);
				_putchar((num1 * num2) % 10 + 48);
				if (num2 < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if ((num2 + 1) * num1 > 9 && (num2 != 9))
			{
				_putchar(num2 * num1 + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((num1 * num2) + 48);
				if (num2 < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar(10);
	}
}
