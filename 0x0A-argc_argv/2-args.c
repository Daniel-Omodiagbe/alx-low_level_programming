#include "main.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: pointer to array of pointers
* Return: integer
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
