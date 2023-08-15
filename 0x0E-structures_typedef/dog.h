#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - defines a dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Description: defines the characteristics of a dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
