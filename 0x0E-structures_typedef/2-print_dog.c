#include "dog.h"
#include <math.h>

/**
* print_dog - prints a struct dog
* @d: pointer to struct dog
* Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		if (isnan((*d).age))
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", (*d).age);
		}
		if ((*d).owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
