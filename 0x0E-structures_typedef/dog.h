#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>

/**
* struct dog - defines a dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Description: defines the characteristics of a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
