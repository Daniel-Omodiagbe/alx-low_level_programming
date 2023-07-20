#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: uppercase parameter
* Return: 1 if uppercase and 0 if not
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
