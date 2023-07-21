#include "main.h"

/**
* main - entry point
* Return: 0
*/

int main(void)
{
	long int i, j, largest;

	for (i = 12057; i < 50829599; i++)
	{
		for (j = 12056; j < i - 1; j++)
		{
			if (!(i % j == 0) && ((i / j) * j) != i)
			{
				if (50829599 % i == 0)
				{
					largest = 12057;
					if (i > largest)
					{
						largest = i;
						/*printf("%ld\n", largest);*/
					}
					/*
					*else
					*{
					*	printf("%ld\n", largest);
					}
					*/
				}
			}
		}
	}
	printf("%ld\n", largest)
	return (0);
}
