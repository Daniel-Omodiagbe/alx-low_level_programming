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

	for (i = 0; i < argc; i++)
	{
		count++;
	}
	printf("%s\n", argv[0]);
	return (0);
}
