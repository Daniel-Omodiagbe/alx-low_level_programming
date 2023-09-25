#include "3-calc.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: array of numbers
* Return: integer
*/

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) / 0 || atoi(argv[1]) % 0)
	{
		printf("Error\n");
		exit(100);
	}
	switch (argv[2][0])
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			break
	return ((*f)(((atoi(argv[1])), (atoi(argv[3])))));
}
