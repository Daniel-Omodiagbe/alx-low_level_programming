#include "function_pointers.h"

/**
* print_name - function that prints name
* @name: name to be printed
* @f: function pointer to characters
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
