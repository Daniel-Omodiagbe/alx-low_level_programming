#include "main.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: pointer to array of pointers
* Return: integer
*/

int main(int argc, char *argv[])
{
	int i, count = 0;

	if (!argv[argc])
	{
		for (i = 0; i < argc; i++)
		{
			count++;
		}
		printf("%d\n", count - 1);
	}
	return (0);
}
