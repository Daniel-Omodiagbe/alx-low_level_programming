#include "main.h"

/**
* main - entry point
* Return: return int
*/

int main(void)
{
	int first = 1;
	int sec = 1;
	int i, swap;

	for (i = 0; i <= 50; i++)
	{
		first = first + i;
		swap = first + sec;
		sec = swap;
		printf("%d, ", swap);
	}
	return (0);
}
