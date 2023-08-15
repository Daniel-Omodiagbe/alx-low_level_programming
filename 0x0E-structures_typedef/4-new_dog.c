#include "dog.h"

/**
* *_strcpy - copies a string
* @dest: first fprmal parameter
* @src: second formal parameter
* Return: pointer to a str
*/

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	i = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		*(dest + i) = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}

/**
* _strlen - returns the length of a string
* @s: pointer to string of characters
* Return: length of string
*/

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

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
	char *new_name, *new_owner;

	doggy = malloc(sizeof(dog_t));
	if (doggy)
	{
		doggy->name = name;
		new_name = malloc(sizeof(_strlen(name)));
		_strcpy(new_name, name);
		doggy->age = age;
		doggy->owner = owner;
		new_owner = malloc(sizeof(_strlen(owner)));
		_strcpy(new_owner, owner);
		return (doggy);
	}
	return (NULL);
}
