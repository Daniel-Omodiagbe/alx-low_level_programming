#include "main.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: pointer to array of pointers
* Return: integer
*/

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
