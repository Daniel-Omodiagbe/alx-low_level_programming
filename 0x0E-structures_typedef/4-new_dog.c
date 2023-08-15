#include "dog.h"
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
* *new_dog - creates a ew dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: Nothing
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy)
	{
		doggy->name = malloc(_strlen(name) + 1);
		if (doggy->name)
		{
			_strcpy(doggy->name, name);
		}
		else
		{
			free(doggy);
			return (NULL);
		}
		doggy->age = age;
		doggy->owner = malloc(_strlen(owner) + 1);
		if (doggy->owner)
		{
			_strcpy(doggy->owner, owner);
		}
		else
		{
			free(doggy);
			return (doggy);
		}
		return (doggy);
	}
	return (NULL);
}
