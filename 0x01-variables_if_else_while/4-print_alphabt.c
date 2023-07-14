#include <stdio.h>

/**
* main - entry point
* Return: return 0
*/

int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar(10);
	return (0);
}
