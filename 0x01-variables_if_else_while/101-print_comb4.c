#include <stdio.h>

/**
* main - entry point
* Return: return 0
*/

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = num1 + 1; num2 <= 8; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);
				putchar(num3 + 48);
				if (num1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar(10);
	return (0);
}
