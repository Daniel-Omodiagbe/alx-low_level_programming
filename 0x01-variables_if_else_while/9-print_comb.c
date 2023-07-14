#include <stdio.h>

/**
* main - entry point
* Return: return 0
*/

int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}

