#include <stdio.h>

/**
* main - entry point
* Return: return 0
*/

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar(num1 / 10 + 48);
			putchar(num1 % 10 + 48);
			putchar(' ');
			putchar(num2 / 10 + 48);
			putchar(num2 % 10 + 48);
			if (num1 < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
