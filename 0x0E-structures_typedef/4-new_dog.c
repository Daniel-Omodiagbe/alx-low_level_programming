#include "dog.h"

/**
* *new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to struct dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy)
	{
		doggy->name = name;
		doggy->age = age;
		doggy->owner = owner;
		return (doggy);
	}
	return (NULL);
}
