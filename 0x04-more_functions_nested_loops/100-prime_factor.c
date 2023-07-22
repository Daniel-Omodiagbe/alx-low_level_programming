#include "main.h"
#include <math.h>

/**
* main - entry point of the program
* Return: 0
*/

int main(void)
{
	long int num = 612852475143;
	long int i, largest;

	for (i = 2; i <= num; i++)
	{
		if ((num % i == 0) && ((num / i) * i) == num)
		{
			if (num % i == 0)
			{
				largest = i;
				if (i > largest)
				{
					largest = i;

				}
				num = num / i;
			}
		}
	}
	printf("%ld\n", largest);
	return (0);
}
