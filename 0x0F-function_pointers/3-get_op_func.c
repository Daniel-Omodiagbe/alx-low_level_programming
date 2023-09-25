#include "3-calc.h"

/**
* get_op_func - select correct function to perform operation
* @s: pointer to char
* @a: first num
* @b: second num
* Return: integer
*/

int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops)
	{
		if (ops[i]
			return (NULL);
		}
		i++;
	}
