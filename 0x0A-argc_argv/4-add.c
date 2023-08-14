#include "main.h"
#include <ctype.h>
/**
* main - entry point
* @argc: number of arguments
* @argv: pointer to array of pointers
* Return: integer
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			if (isdigit(argv[i][j]) != '\0')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
